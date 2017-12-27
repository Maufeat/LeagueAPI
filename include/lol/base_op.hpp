#pragma once
#include <lol/base_def.hpp>
#include <SimpleWeb/crypto.hpp>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/client_wss.hpp>
#include "def/PluginResourceEvent.hpp"

namespace lol {
  using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;
  using WssClient = SimpleWeb::SocketClient<SimpleWeb::WSS>;
  using HttpsArgs = std::multimap<std::string, std::optional<std::string>>;
  using HttpsResponse = std::shared_ptr<HttpsClient::Response>;
  using std::to_string;
  
  enum ErrorSource : uint16_t {
    League,
    LeagueUnkown,
    ParseError,
    ParseResponse,
    Http,
  };
  
  struct Error {
    std::string errorCode;
    int32_t httpStatus;
    std::string message;
    ErrorSource source;
    std::string internal;
	json payload;
  };
  
  inline void to_json(json& j, const Error& v) {
    j["errorCode"] = v.errorCode;
    j["httpStatus"] = v.httpStatus;
    j["message"] = v.message;
    j["source"] = v.source;
    j["internal"] = v.internal;
	j["payload"] = v.payload;
  }
  
  inline void from_json(const json& j, Error& v) {
    v.source = ErrorSource::League,
    v.errorCode = j.at("errorCode").get<std::string>();
    v.httpStatus = j.at("httpStatus").get<int32_t>();
    v.message = j.at("message").get<std::string>();
	v.payload = j.at("payload").get<json>();
  }

  inline std::string to_string(const std::string& v) {
    return v;
  }
  
  inline std::string to_string(const json& j) {
    if (j.is_string())
      return j.get<std::string>();
    return j.dump();
  }
  
  template<typename T>
  inline std::optional<std::string> to_string(const std::optional<T>& o) {
    if (o)
      return to_string(*o);
    return std::nullopt;
  }
  
  template<typename T>
  struct Result {
    std::optional<Error> error;
    std::optional<T> data;
    Result(const T& d) : data(d) { }
    Result(const Error& e) : error(e) { }
    std::optional<T>& operator->() { return data; }
    const T& operator*() const { return *data; }
    T& operator*() { return *data; }
    explicit operator bool() const { return error == std::nullopt; }
    bool operator!() const { return error != std::nullopt; }
  };
  
  template<typename T>
  inline Result<T> ToResult(const HttpsResponse& r) {
    std::string content_type{};
    int32_t status_code = std::stoi(r->status_code);
    std::string content = r->content.string();
    json j{};
    if (auto it = r->header.find("content-type"); it != r->header.end()) {
      content_type = it->second;
    }
    if (content_type == "application/json") {
      if(content.size() > 0) {
        j = json::parse(content);
      }
    } else {
      j = content;
    }
    if ((status_code < 200 || status_code>299) && content_type == "application/json") {
      try {
        return j.get<Error>();
      } catch(const json::exception& j) {
        return Error{ content_type, status_code, "Fail parsing json Error message!",  ErrorSource::ParseError, content};
      }
    } else if ((status_code < 200 || status_code>299)) {
      return  Error{ content_type, status_code, "Non-json Error message!",  ErrorSource::LeagueUnkown, content};
    } else {
      try {
        return j.get<T>();
      } catch(const json::exception& j) {
        return Error{ content_type, status_code, "Unkown league error",  ErrorSource::ParseResponse, content};
      }
    }
  }
  
  template<typename T>
  inline Result<T> ToResult(const SimpleWeb::error_code &e) {
    return Error { to_string(e.value()), -1, "Http request failed!",  ErrorSource::Http, e.message()};
  }
  
  inline SimpleWeb::CaseInsensitiveMultimap Args2Headers(const HttpsArgs& args) {
    SimpleWeb::CaseInsensitiveMultimap map;
    for (const auto& it : args)
      if (it.second)
        map.insert({ it.first, *(it.second) });
    return map;
  }
  
  struct LeagueClient {
    std::string auth;
    WssClient wss;
    HttpsClient https;
    HttpsClient httpsa;
    uint32_t id;
    std::map<std::string, json> trashbin;

    LeagueClient(const LeagueClient&) = delete;
    LeagueClient(const std::string& address, int port, const std::string& password, uint32_t id = 0) :
      auth("Basic " + SimpleWeb::Crypto::Base64::encode("riot:" + password)),
      wss(address + ":" + std::to_string(port), false),
      https(address + ":" + std::to_string(port), false),
      httpsa(address + ":" + std::to_string(port), false)
    {
      wss.config.header = {
        { "authorization", auth },
        { "sec-websocket-protocol", "wamp" }
      };
    }
  };
}
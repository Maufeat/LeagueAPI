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
  
  struct Nothing { };
  
  inline void to_json(json& j, const Nothing& v) {
    j = nullptr;
  }
  
  inline void from_json(const json& j, Nothing& v) { }
  
  enum ErrorSource : uint16_t {
    League,
    LeagueUnkown,
    ParseJson,
    DeserializeError,
    DeserializeResponse,
    Http,
  };
  
  struct Error {
    std::string errorCode;
    int32_t httpStatus;
    std::string message;
    ErrorSource source;
    json implementationDetails;
    json payload;
  };
  
  inline void to_json(json& j, const Error& v) {
    j["errorCode"] = v.errorCode;
    j["httpStatus"] = v.httpStatus;
    j["message"] = v.message;
    j["source"] = v.source;
    j["implementationDetails"] = v.implementationDetails;
    j["payload"] = v.payload;
  }
  
  inline void from_json(const json& j, Error& v) {
    v.source = ErrorSource::League,
    v.errorCode = j.at("errorCode").get<std::string>();
    v.httpStatus = j.at("httpStatus").get<int32_t>();
    v.message = j.at("message").get<std::string>();
    if(auto it = j.find("implementationDetails"); it != j.end())
      v.implementationDetails = *it;
    if(auto it = j.find("payload"); it != j.end())
      v.payload = *it;
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
    if (content_type == "application/json" && content.size() > 0) {
      try {
        j = json::parse(content);
      } catch(const json::exception& j) {
        return Error{ content_type, status_code, "Fail parsing json =!",  ErrorSource::ParseJson, content};
      }
    } else {
      j = content;
    }
    if ((status_code < 200 || status_code>299) && content_type == "application/json") {
      try {
        return j.get<Error>();
      } catch(const json::exception& j) {
        return Error{ content_type, status_code, "Fail deserializing json Error message!",  ErrorSource::DeserializeError, content};
      }
    } else if ((status_code < 200 || status_code>299)) {
      return  Error{ content_type, status_code, "Non-json Error message!",  ErrorSource::LeagueUnkown, content};
    } else {
      try {
        return j.get<T>();
      } catch(const json::exception& j) {
        return Error{ content_type, status_code, "Fail deserializing json response!",  ErrorSource::DeserializeResponse, content};
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
}
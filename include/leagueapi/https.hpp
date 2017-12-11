#pragma once
#include <leagueapi/base.hpp>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/crypto.hpp>
#include <optional>
namespace leagueapi {
  namespace https {
    struct Error {
      json payload;
      std::string message;
      std::string errorCode;
      std::string implementationDetails;
      int32_t httpStatus;
    };
    
    static void to_json(json& j, const Error& v) { 
      j["payload"] = v.payload;
      j["message"] = v.message;
      j["errorCode"] = v.errorCode;
      j["implementationDetails"] = v.implementationDetails;
      j["httpStatus"] = v.httpStatus;
    }
    
    static void from_json(const json& j, Error& v) { 
      v.payload = j.at("payload").get<json>(); 
      v.message = j.at("message").get<std::string>(); 
      v.errorCode = j.at("errorCode").get<std::string>(); 
      v.implementationDetails = j.at("implementationDetails").get<std::string>(); 
      v.httpStatus = j.at("httpStatus").get<int32_t>(); 
    }
    
    struct Info {
      std::string host;
      std::string auth;
      Info(const std::string& address, int port, const std::string& password) {
        host = address + ":" + to_string(port);
        auth = "Basic " + SimpleWeb::Crypto::Base64::encode("riot:"+password);
      }
    };

    struct Response {
      const std::string& data;
      int32_t status_code;
      const std::string& content_type;
    };
    
    template<typename T>
    class Result {
    private:
      std::optional<Error> mError;
      T mData;
    public:
      Result(const Response& r) {
        if(r.status_code != 200 && r.content_type == "application/json")
          mError = json::parse(r.data);
        else if( r.status_code != 200)
          mError = Error {r.data, r.content_type, r.status_code};
        else
          mData = json::parse(r.data);
      }
      const std::optional<Error>& error() const {
        return mError;
      }
      const T* operator->() const {
        return &mData;
      }
      T* operator->() {
        return &mData;
      }
      const T& operator*() const {
        return mData;
      }
      T& operator*() {
        return mData;
      }
      explicit operator bool() const {
        return mError != std::nullopt;
      }
      bool operator!() const {
        return mError == std::nullopt;
      }
    };
    
    template<>
    class Result<json> {
    private:
      std::optional<Error> mError;
      json mData;
    public:
      Result(const Response& r) {
        if(r.status_code != 200 && r.content_type == "application/json")
          mError = json::parse(r.data);
        else if( r.status_code != 200)
          mError = Error {r.data, r.content_type, r.status_code};
        else if(r.content_type == "application/json")
          mData = json::parse(r.data);
        else
          mData = r.data;
      }
      const std::optional<Error>& error() const {
        return mError;
      }
      const json* operator->() const {
        return &mData;
      }
      json* operator->() {
        return &mData;
      }
      const json& operator*() const {
        return mData;
      }
      json& operator*() {
        return mData;
      }
      explicit operator bool() const {
        return mError != std::nullopt;
      }
      bool operator!() const {
        return mError == std::nullopt;
      }
    };
    
    template<>
    class Result<void> {
    private:
      std::optional<Error> mError;
      json mData;
    public:
      Result(const Response& r) {
        if(r.status_code != 204 && r.content_type == "application/json")
          mError = json::parse(r.data);
        else if( r.status_code != 204)
          mError = Error {r.data, r.content_type, r.status_code};
      }
      const std::optional<Error>& error() const {
        return mError;
      }
      explicit operator bool() const {
        return mError != std::nullopt;
      }
      bool operator!() const {
        return mError == std::nullopt;
      }
    };
    
    using Args = std::multimap<std::string, std::optional<std::string>>;
    using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;
    using HttpsMap = SimpleWeb::CaseInsensitiveMultimap;
    using HttpsResponse = shared_ptr<HttpsClient::Response>;

    inline HttpsMap Args2Headers(const Args& args, const HttpsMap& map = {}) {
      for(const auto it: args)
        if(it->second)
          map.insert({it->first, *(it->second)});
    }
    
    inline std::string Args2String(const Args& args) {
      return SimpleWeb::QueryString::create(Args2Headers(args));
    }
    inline Response Https2Res(const HttpsResponse& r) {
      std::string content_type = "";
      for(auto it = r->header; it != r->header.end())
        content_type = it->second;
      return Response {r->content.string(), std::to_string(r->status_code), content_type};
    }

    static Response Do(const Info& info, const std::string& path, const std::string& method, const Args& query, const Args& headers) {
      detail::HttpsClient client(info.host, false);
      return Https2Res(client.request(method, path + Args2String(query), "", Args2Headers(headers, {{"Authorization", info.auth}})));
    }

    static Response Do(const Info& info, const std::string& path, const std::string& method, const Args& query, const Args& headers, const json& body) {
      detail::HttpsClient client(info.host, false);
      return Https2Res(client.request(method, path + Args2String(query), body.dump(), Args2Headers(headers, {
        {"Authorization", info.auth}, {"content-type", "application/json"}
      })));
    }

    static Response Do(const Info& info, const std::string& path, const std::string& method, const Args& query, const Args& headers, const Args& formdata) {
      detail::HttpsClient client(info.host, false);
      return Https2Res(client.request(method, path + Args2String(query), Args2String(formdata), Args2Headers(headers, {
        {"Authorization", info.auth}, {"content-type", "application/json"}
      }));;
    }
    
    using std::to_string;
    inline std::string to_string(const std::string& v) {
      return v;
    }
    inline std::string to_string(const json& j) {
      if(j.is_string())
        return j.get<std::string>();
      return j.dump();
    }
    template<typename T>
    inline std::optional<std::string> to_string(const std::optional<T>& o) {
      if(o)
        return to_string(*o);
      return std::nullopt;
    }
  }
} 
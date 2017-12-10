#pragma once
#include <leagueapi/base.hpp>
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
      Info(const std::string& address, int port, const std::string& password);
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
      T* operator->() {
        return &mData;
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
      json* operator->() {
        return &mData;
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
    static Response Do(const Info& info, const std::string& path, const std::string& method, const Args& query, const Args& headers);
    static Response Do(const Info& info, const std::string& path, const std::string& method, const Args& query, const Args& headers, const json& body);
    static Response Do(const Info& info, const std::string& path, const std::string& method, const Args& query, const Args& headers, const Args& formdata);
    
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
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LogSeverityLevels.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> LoggingStart(T& _client, const std::optional<bool>& buffered = std::nullopt, const std::optional<LogSeverityLevels>& severity = std::nullopt)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/LoggingStart?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "buffered", to_string(buffered) },
          { "severity", to_string(severity) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void LoggingStart(T& _client, const std::optional<bool>& buffered = std::nullopt, const std::optional<LogSeverityLevels>& severity = std::nullopt, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/LoggingStart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "buffered", to_string(buffered) },
          { "severity", to_string(severity) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
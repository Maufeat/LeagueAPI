#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LogSeverityLevels.hpp"
namespace lol {
  inline Result<void> LoggingStart(LeagueClient& _client, const std::optional<bool>& buffered = std::nullopt, const std::optional<LogSeverityLevels>& severity = std::nullopt)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/LoggingStart?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "buffered", to_string(buffered) },
           { "severity", to_string(severity) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void LoggingStart(LeagueClient& _client, const std::optional<bool>& buffered = std::nullopt, const std::optional<LogSeverityLevels>& severity = std::nullopt, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/LoggingStart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "buffered", to_string(buffered) },
           { "severity", to_string(severity) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
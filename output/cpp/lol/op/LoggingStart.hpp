#pragma once
#include "../base_op.hpp" 
#include "../def/LogSeverityLevels.hpp"
namespace lol {
  inline Result<void> LoggingStart(const LeagueClient& _client, const std::optional<bool>& buffered = std::nullopt, const std::optional<LogSeverityLevels>& severity = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/LoggingStart?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "buffered", to_string(buffered) },
           { "severity", to_string(severity) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LogSeverityLevels.hpp>
namespace lol {
  Result<void> LoggingStart(const LeagueClient& _client, const std::optional<bool>& buffered = std::nullopt, const std::optional<LogSeverityLevels>& severity = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/LoggingStart?" + SimpleWeb::QueryString::create(Args2Headers({ { "buffered", to_string(buffered) },
    { "severity", to_string(severity) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
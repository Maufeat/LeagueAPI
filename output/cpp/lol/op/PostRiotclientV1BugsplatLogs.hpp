#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostRiotclientV1BugsplatLogs(const LeagueClient& _client, const std::string& logFilePath)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riotclient/v1/bugsplat/logs?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(logFilePath).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
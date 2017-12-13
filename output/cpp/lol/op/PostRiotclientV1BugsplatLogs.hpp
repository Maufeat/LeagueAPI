#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientV1BugsplatLogs(const LeagueClient& _client, const std::string& logFilePath)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riotclient/v1/bugsplat/logs?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(logFilePath).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
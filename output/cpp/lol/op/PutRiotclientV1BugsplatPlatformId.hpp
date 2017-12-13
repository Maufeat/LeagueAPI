#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutRiotclientV1BugsplatPlatformId(const LeagueClient& _client, const std::string& platformId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/riotclient/v1/bugsplat/platform-id?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(platformId).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetRiotclientV1BugsplatPlatformId(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riotclient/v1/bugsplat/platform-id?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
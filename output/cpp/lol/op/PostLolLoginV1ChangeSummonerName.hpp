#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLoginV1ChangeSummonerName(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/change-summoner-name?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(name).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
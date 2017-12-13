#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerProfileUpdate.hpp>
namespace lol {
  Result<json> PostLolSummonerV1CurrentSummonerSummonerProfile(const LeagueClient& _client, const LolSummonerSummonerProfileUpdate& body)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-summoner/v1/current-summoner/summoner-profile?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(body).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
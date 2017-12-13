#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesApexLeagues.hpp>
namespace lol {
  Result<LolLeaguesApexLeagues> GetLolLeaguesV1ChallengerLeagues(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leagues/v1/challenger-leagues?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
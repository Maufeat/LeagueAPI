#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolSummonerV1CheckNameAvailabilityByName(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v1/check-name-availability/"+to_string(name)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
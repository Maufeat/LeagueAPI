#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> GetLolSummonerV1SummonerProfile(const LeagueClient& _client, const std::string& puuid)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/lol-summoner/v1/summoner-profile?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "puuid", to_string(puuid) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
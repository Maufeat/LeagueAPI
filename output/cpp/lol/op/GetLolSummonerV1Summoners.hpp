#pragma once
#include "../base_op.hpp" 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  inline Result<LolSummonerSummoner> GetLolSummonerV1Summoners(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolSummonerSummoner> {
        _client_.request("get", "/lol-summoner/v1/summoners?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "name", to_string(name) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerSummoner> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  inline Result<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerXpInfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolSummonerSummoner> {
        _client_.request("post", "/lol-summoner/v1/current-summoner/xpInfo?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerSummoner> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolLeaguesLeagueChampAndStat.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesLeagueChampAndStat>> GetLolLeaguesV1SummonerTopChampsBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLeaguesLeagueChampAndStat>> {
        _client_.request("get", "/lol-leagues/v1/summoner-top-champs/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesLeagueChampAndStat>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
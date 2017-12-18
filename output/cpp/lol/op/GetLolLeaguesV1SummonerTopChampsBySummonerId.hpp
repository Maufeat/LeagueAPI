#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeagueChampAndStat.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesLeagueChampAndStat>> GetLolLeaguesV1SummonerTopChampsBySummonerId(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<std::vector<LolLeaguesLeagueChampAndStat>> {
        _client.https.request("get", "/lol-leagues/v1/summoner-top-champs/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesLeagueChampAndStat>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaguesV1SummonerTopChampsBySummonerId(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<std::vector<LolLeaguesLeagueChampAndStat>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v1/summoner-top-champs/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLeaguesLeagueChampAndStat>> { response });
          else
            cb(_client,Result<std::vector<LolLeaguesLeagueChampAndStat>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
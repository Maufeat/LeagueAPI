#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeague.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesLeague>> GetLolLeaguesV1SummonerLeaguesBySummonerId(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<std::vector<LolLeaguesLeague>> {
        _client.https.request("get", "/lol-leagues/v1/summoner-leagues/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLeaguesLeague>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaguesV1SummonerLeaguesBySummonerId(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<std::vector<LolLeaguesLeague>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v1/summoner-leagues/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLeaguesLeague>> { response });
          else
            cb(_client,Result<std::vector<LolLeaguesLeague>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
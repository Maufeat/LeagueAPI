#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeague.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLeaguesLeague>> GetLolLeaguesV1SummonerLeaguesBySummonerId(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<std::vector<LolLeaguesLeague>>(_client.https.request("get", "/lol-leagues/v1/summoner-leagues/"+to_string(summonerId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLeaguesLeague>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLeaguesV1SummonerLeaguesBySummonerId(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<std::vector<LolLeaguesLeague>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v1/summoner-leagues/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLeaguesLeague>>(e));
            else
              cb(_client, ToResult<std::vector<LolLeaguesLeague>>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAcsAcsChampionGamesCollection.hpp"
namespace lol {
  inline Result<LolAcsAcsChampionGamesCollection> GetLolAcsV2RecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId)
  {
    try {
      return ToResult<LolAcsAcsChampionGamesCollection>(_client.https.request("get", "/lol-acs/v2/recently-played-champions/"+to_string(accountId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAcsAcsChampionGamesCollection>(e.code());
    }
  }
  inline void GetLolAcsV2RecentlyPlayedChampionsByAccountId(LeagueClient& _client, const uint64_t& accountId, std::function<void(LeagueClient&, const Result<LolAcsAcsChampionGamesCollection>&)> cb)
  {
    _client.httpsa.request("get", "/lol-acs/v2/recently-played-champions/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAcsAcsChampionGamesCollection>(e));
            else
              cb(_client, ToResult<LolAcsAcsChampionGamesCollection>(response));
        });
  }
}
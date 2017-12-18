#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampion.hpp"
namespace lol {
  inline Result<LolChampionsCollectionsChampion> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionId(LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId)
  {
    try {
      return ToResult<LolChampionsCollectionsChampion>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampionsCollectionsChampion>(e.code());
    }
  }
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionId(LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId, std::function<void(LeagueClient&, const Result<LolChampionsCollectionsChampion>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampionsCollectionsChampion>(e));
            else
              cb(_client, ToResult<LolChampionsCollectionsChampion>(response));
        });
  }
}
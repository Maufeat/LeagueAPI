#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionPlayableCounts.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampionsCollectionsChampionPlayableCounts> GetLolChampionsV1InventoriesBySummonerIdChampionsPlayableCount(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolChampionsCollectionsChampionPlayableCounts>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-playable-count?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampionsCollectionsChampionPlayableCounts>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsPlayableCount(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<LolChampionsCollectionsChampionPlayableCounts>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-playable-count?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampionsCollectionsChampionPlayableCounts>(e));
            else
              cb(_client, ToResult<LolChampionsCollectionsChampionPlayableCounts>(response));
        });
  }
}
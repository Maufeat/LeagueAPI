#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionSkin.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampionsCollectionsChampionSkin> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId(T& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& championSkinId)
  {
    try {
      return ToResult<LolChampionsCollectionsChampionSkin>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(championSkinId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampionsCollectionsChampionSkin>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId(T& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& championSkinId, std::function<void(T&, const Result<LolChampionsCollectionsChampionSkin>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(championSkinId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampionsCollectionsChampionSkin>(e));
            else
              cb(_client, ToResult<LolChampionsCollectionsChampionSkin>(response));
        });
  }
}
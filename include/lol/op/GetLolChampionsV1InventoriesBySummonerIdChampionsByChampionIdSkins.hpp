#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionSkin.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChampionsCollectionsChampionSkin>> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkins(T& _client, const uint64_t& summonerId, const int32_t& championId)
  {
    try {
      return ToResult<std::vector<LolChampionsCollectionsChampionSkin>>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChampionsCollectionsChampionSkin>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkins(T& _client, const uint64_t& summonerId, const int32_t& championId, std::function<void(T&, const Result<std::vector<LolChampionsCollectionsChampionSkin>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionSkin>>(e));
            else
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionSkin>>(response));
        });
  }
}
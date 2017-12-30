#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionChroma.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChampionsCollectionsChampionChroma>> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsBySkinIdChromas(T& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& skinId)
  {
    try {
      return ToResult<std::vector<LolChampionsCollectionsChampionChroma>>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(skinId)+"/chromas?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChampionsCollectionsChampionChroma>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsBySkinIdChromas(T& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& skinId, std::function<void(T&, const Result<std::vector<LolChampionsCollectionsChampionChroma>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(skinId)+"/chromas?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionChroma>>(e));
            else
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionChroma>>(response));
        });
  }
}
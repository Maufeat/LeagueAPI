#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionSkinMinimal.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChampionsCollectionsChampionSkinMinimal>> GetLolChampionsV1InventoriesBySummonerIdSkinsMinimal(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<std::vector<LolChampionsCollectionsChampionSkinMinimal>>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/skins-minimal?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChampionsCollectionsChampionSkinMinimal>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampionsV1InventoriesBySummonerIdSkinsMinimal(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<std::vector<LolChampionsCollectionsChampionSkinMinimal>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/skins-minimal?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionSkinMinimal>>(e));
            else
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionSkinMinimal>>(response));
        });
  }
}
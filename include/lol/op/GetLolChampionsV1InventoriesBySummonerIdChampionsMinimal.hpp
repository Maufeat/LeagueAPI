#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionMinimal.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChampionsCollectionsChampionMinimal>> GetLolChampionsV1InventoriesBySummonerIdChampionsMinimal(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<std::vector<LolChampionsCollectionsChampionMinimal>>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-minimal?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChampionsCollectionsChampionMinimal>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsMinimal(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<std::vector<LolChampionsCollectionsChampionMinimal>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-minimal?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionMinimal>>(e));
            else
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampionMinimal>>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsChampionMastery.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolCollectionsCollectionsChampionMastery>> GetLolCollectionsV1InventoriesBySummonerIdChampionMastery(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<std::vector<LolCollectionsCollectionsChampionMastery>>(_client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/champion-mastery?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolCollectionsCollectionsChampionMastery>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolCollectionsV1InventoriesBySummonerIdChampionMastery(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<std::vector<LolCollectionsCollectionsChampionMastery>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/champion-mastery?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolCollectionsCollectionsChampionMastery>>(e));
            else
              cb(_client, ToResult<std::vector<LolCollectionsCollectionsChampionMastery>>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsChestEligibility.hpp"
namespace lol {
  template<typename T>
  inline Result<LolCollectionsCollectionsChestEligibility> GetLolCollectionsV1InventoriesChestEligibility(T& _client)
  {
    try {
      return ToResult<LolCollectionsCollectionsChestEligibility>(_client.https.request("get", "/lol-collections/v1/inventories/chest-eligibility?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsChestEligibility>(e.code());
    }
  }
  template<typename T>
  inline void GetLolCollectionsV1InventoriesChestEligibility(T& _client, std::function<void(T&, const Result<LolCollectionsCollectionsChestEligibility>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/chest-eligibility?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsChestEligibility>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsChestEligibility>(response));
        });
  }
}
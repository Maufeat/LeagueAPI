#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsChestEligibility.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsChestEligibility> GetLolCollectionsV1InventoriesChestEligibility(LeagueClient& _client)
  {
    try {
      return Result<LolCollectionsCollectionsChestEligibility> {
        _client.https.request("get", "/lol-collections/v1/inventories/chest-eligibility?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsChestEligibility> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolCollectionsV1InventoriesChestEligibility(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsChestEligibility>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/chest-eligibility?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsChestEligibility> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsChestEligibility> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsChestEligibility.hpp>
namespace lol {
  Result<LolCollectionsCollectionsChestEligibility> GetLolCollectionsV1InventoriesChestEligibility(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-collections/v1/inventories/chest-eligibility?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolLoadoutsV2ItemsByIdByInventoryType(const LeagueClient& _client, const uint32_t& id, const std::string& inventoryType)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loadouts/v2/items/"+to_string(id)+"/"+to_string(inventoryType)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
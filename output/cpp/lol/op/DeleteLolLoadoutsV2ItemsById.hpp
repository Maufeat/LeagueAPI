#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLoadoutsV2ItemsById(const LeagueClient& _client, const uint32_t& id, const std::string& inventoryType)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-loadouts/v2/items/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({ { "inventoryType", to_string(inventoryType) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
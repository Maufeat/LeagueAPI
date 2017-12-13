#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoadoutsFrontendInventoryResponse.hpp>
namespace lol {
  Result<LolLoadoutsFrontendInventoryResponse> GetLolLoadoutsV1Inventory(const LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loadouts/v1/inventory?" + SimpleWeb::QueryString::create(Args2Headers({ { "inventoryTypes", to_string(inventoryTypes) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
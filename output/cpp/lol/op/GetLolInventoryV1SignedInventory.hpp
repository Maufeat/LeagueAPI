#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::map<std::string, std::string>> GetLolInventoryV1SignedInventory(const LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-inventory/v1/signedInventory?" + SimpleWeb::QueryString::create(Args2Headers({ { "inventoryTypes", to_string(inventoryTypes) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
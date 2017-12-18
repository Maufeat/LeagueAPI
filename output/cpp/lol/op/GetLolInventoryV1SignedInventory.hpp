#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<std::map<std::string, std::string>> GetLolInventoryV1SignedInventory(const LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::map<std::string, std::string>> {
        _client_.request("get", "/lol-inventory/v1/signedInventory?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryTypes", to_string(inventoryTypes) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, std::string>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
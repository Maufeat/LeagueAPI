#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::map<std::string, std::string>> GetLolInventoryV1SignedInventory(LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    try {
      return ToResult<std::map<std::string, std::string>>(_client.https.request("get", "/lol-inventory/v1/signedInventory?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryTypes", to_string(inventoryTypes) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::map<std::string, std::string>>(e.code());
    }
  }
  inline void GetLolInventoryV1SignedInventory(LeagueClient& _client, const std::vector<std::string>& inventoryTypes, std::function<void(LeagueClient&, const Result<std::map<std::string, std::string>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-inventory/v1/signedInventory?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryTypes", to_string(inventoryTypes) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::map<std::string, std::string>>(e));
            else
              cb(_client, ToResult<std::map<std::string, std::string>>(response));
        });
  }
}
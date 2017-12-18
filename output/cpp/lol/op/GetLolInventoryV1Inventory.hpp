#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolInventoryInventoryItem.hpp"
namespace lol {
  inline Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1Inventory(LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    try {
      return Result<std::vector<LolInventoryInventoryItem>> {
        _client.https.request("get", "/lol-inventory/v1/inventory?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryTypes", to_string(inventoryTypes) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolInventoryInventoryItem>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolInventoryV1Inventory(LeagueClient& _client, const std::vector<std::string>& inventoryTypes, std::function<void(LeagueClient&,const Result<std::vector<LolInventoryInventoryItem>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-inventory/v1/inventory?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryTypes", to_string(inventoryTypes) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolInventoryInventoryItem>> { response });
          else
            cb(_client,Result<std::vector<LolInventoryInventoryItem>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoadoutsFrontendInventoryResponse.hpp"
namespace lol {
  inline Result<LolLoadoutsFrontendInventoryResponse> GetLolLoadoutsV1Inventory(LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    try {
      return Result<LolLoadoutsFrontendInventoryResponse> {
        _client.https.request("get", "/lol-loadouts/v1/inventory?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryTypes", to_string(inventoryTypes) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoadoutsFrontendInventoryResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLoadoutsV1Inventory(LeagueClient& _client, const std::vector<std::string>& inventoryTypes, std::function<void(LeagueClient&,const Result<LolLoadoutsFrontendInventoryResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loadouts/v1/inventory?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryTypes", to_string(inventoryTypes) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLoadoutsFrontendInventoryResponse> { response });
          else
            cb(_client,Result<LolLoadoutsFrontendInventoryResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
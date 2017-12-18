#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> DeleteLolLoadoutsV2ItemsById(LeagueClient& _client, const uint32_t& id, const std::string& inventoryType)
  {
    try {
      return Result<json> {
        _client.https.request("delete", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryType", to_string(inventoryType) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void DeleteLolLoadoutsV2ItemsById(LeagueClient& _client, const uint32_t& id, const std::string& inventoryType, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryType", to_string(inventoryType) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
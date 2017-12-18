#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPlayerInventory.hpp"
namespace lol {
  inline Result<LolPerksPlayerInventory> GetLolPerksV1Inventory(LeagueClient& _client)
  {
    try {
      return Result<LolPerksPlayerInventory> {
        _client.https.request("get", "/lol-perks/v1/inventory?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksPlayerInventory> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPerksV1Inventory(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolPerksPlayerInventory>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/inventory?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPerksPlayerInventory> { response });
          else
            cb(_client,Result<LolPerksPlayerInventory> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
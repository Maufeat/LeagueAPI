#pragma once
#include "../base_op.hpp" 
#include "../def/LolPerksPlayerInventory.hpp"
namespace lol {
  inline Result<LolPerksPlayerInventory> GetLolPerksV1Inventory(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPerksPlayerInventory> {
        _client_.request("get", "/lol-perks/v1/inventory?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPerksPlayerInventory> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
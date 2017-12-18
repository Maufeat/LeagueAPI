#pragma once
#include "../base_op.hpp" 
#include "../def/LolInventoryInventoryItem.hpp"
namespace lol {
  inline Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1InventoryEmotes(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolInventoryInventoryItem>> {
        _client_.request("get", "/lol-inventory/v1/inventory/emotes?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolInventoryInventoryItem>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
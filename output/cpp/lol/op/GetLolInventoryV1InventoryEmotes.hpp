#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolInventoryInventoryItem.hpp>
namespace lol {
  Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1InventoryEmotes(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-inventory/v1/inventory/emotes?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
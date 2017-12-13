#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPerksPlayerInventory.hpp>
namespace lol {
  Result<LolPerksPlayerInventory> GetLolPerksV1Inventory(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-perks/v1/inventory?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
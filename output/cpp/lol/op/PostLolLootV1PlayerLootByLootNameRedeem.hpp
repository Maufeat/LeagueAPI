#pragma once
#include "../base_op.hpp" 
#include "../def/LolLootPlayerLootUpdate.hpp"
namespace lol {
  inline Result<LolLootPlayerLootUpdate> PostLolLootV1PlayerLootByLootNameRedeem(const LeagueClient& _client, const std::string& lootName)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLootPlayerLootUpdate> {
        _client_.request("post", "/lol-loot/v1/player-loot/"+to_string(lootName)+"/redeem?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLootPlayerLootUpdate> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
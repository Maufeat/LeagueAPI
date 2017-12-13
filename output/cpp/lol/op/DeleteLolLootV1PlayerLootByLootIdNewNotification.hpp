#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLootV1PlayerLootByLootIdNewNotification(const LeagueClient& _client, const std::string& lootId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/new-notification?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
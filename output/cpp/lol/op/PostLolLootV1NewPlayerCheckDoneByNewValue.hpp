#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PostLolLootV1NewPlayerCheckDoneByNewValue(const LeagueClient& _client, const bool& newValue)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loot/v1/new-player-check-done/"+to_string(newValue)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
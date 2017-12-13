#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolLobbyV2PartiesOverridesEnabled(const LeagueClient& _client, const bool& enabled)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v2/parties/overrides/Enabled?" + SimpleWeb::QueryString::create(Args2Headers({ { "enabled", to_string(enabled) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
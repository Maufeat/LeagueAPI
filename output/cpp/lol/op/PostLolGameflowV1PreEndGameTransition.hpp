#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameflowV1PreEndGameTransition(const LeagueClient& _client, const bool& enabled)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/pre-end-game-transition?" + SimpleWeb::QueryString::create(Args2Headers({ { "enabled", to_string(enabled) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowGameflowGameDodge.hpp>
namespace lol {
  Result<void> PostLolGameflowV1SessionDodge(const LeagueClient& _client, const LolGameflowGameflowGameDodge& dodgeData)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/session/dodge?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(dodgeData).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
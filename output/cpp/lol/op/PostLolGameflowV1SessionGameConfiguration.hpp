#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowQueue.hpp>
namespace lol {
  Result<void> PostLolGameflowV1SessionGameConfiguration(const LeagueClient& _client, const LolGameflowQueue& queue)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/session/game-configuration?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(queue).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
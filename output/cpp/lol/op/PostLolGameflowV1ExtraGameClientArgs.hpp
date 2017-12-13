#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameflowV1ExtraGameClientArgs(const LeagueClient& _client, const std::vector<std::string>& extraGameClientArgs)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/extra-game-client-args?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(extraGameClientArgs).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
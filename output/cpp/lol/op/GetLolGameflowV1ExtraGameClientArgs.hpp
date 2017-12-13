#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<std::string>> GetLolGameflowV1ExtraGameClientArgs(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-gameflow/v1/extra-game-client-args?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
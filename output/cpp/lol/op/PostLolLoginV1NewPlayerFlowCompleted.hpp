#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLoginV1NewPlayerFlowCompleted(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/new-player-flow-completed?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
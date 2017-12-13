#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolGameflowV1BattleTrainingStart(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/battle-training/start?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
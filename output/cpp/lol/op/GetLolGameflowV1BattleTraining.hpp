#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolGameflowV1BattleTraining(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-gameflow/v1/battle-training?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
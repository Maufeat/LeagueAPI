#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowGameflowWatchPhase.hpp>
namespace lol {
  Result<LolGameflowGameflowWatchPhase> GetLolGameflowV1Watch(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-gameflow/v1/watch?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueueCustomGame.hpp>
namespace lol {
  Result<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1CustomNonDefault(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-queues/v1/custom-non-default?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
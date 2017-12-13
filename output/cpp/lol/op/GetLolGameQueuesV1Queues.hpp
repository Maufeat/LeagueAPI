#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueue.hpp>
namespace lol {
  Result<std::vector<LolGameQueuesQueue>> GetLolGameQueuesV1Queues(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-queues/v1/queues?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
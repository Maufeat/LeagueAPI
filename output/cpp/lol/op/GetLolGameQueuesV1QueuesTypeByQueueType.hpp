#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueue.hpp>
namespace lol {
  Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesTypeByQueueType(const LeagueClient& _client, const std::string& queueType)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-queues/v1/queues/type/"+to_string(queueType)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
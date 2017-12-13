#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueue.hpp>
namespace lol {
  Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesById(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-queues/v1/queues/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
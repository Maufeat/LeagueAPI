#pragma once
#include "../base_op.hpp" 
#include "../def/LolGameQueuesQueue.hpp"
namespace lol {
  inline Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesTypeByQueueType(const LeagueClient& _client, const std::string& queueType)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameQueuesQueue> {
        _client_.request("get", "/lol-game-queues/v1/queues/type/"+to_string(queueType)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameQueuesQueue> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
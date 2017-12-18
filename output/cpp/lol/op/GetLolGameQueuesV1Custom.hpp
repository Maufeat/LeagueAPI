#pragma once
#include "../base_op.hpp" 
#include "../def/LolGameQueuesQueueCustomGame.hpp"
namespace lol {
  inline Result<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1Custom(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameQueuesQueueCustomGame> {
        _client_.request("get", "/lol-game-queues/v1/custom?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameQueuesQueueCustomGame> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
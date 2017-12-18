#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueueCustomGame.hpp>
namespace lol {
  inline Result<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1CustomNonDefault(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameQueuesQueueCustomGame> {
        _client_.request("get", "/lol-game-queues/v1/custom-non-default?" +
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
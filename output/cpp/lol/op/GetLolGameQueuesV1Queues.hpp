#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueue.hpp>
namespace lol {
  inline Result<std::vector<LolGameQueuesQueue>> GetLolGameQueuesV1Queues(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolGameQueuesQueue>> {
        _client_.request("get", "/lol-game-queues/v1/queues?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolGameQueuesQueue>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
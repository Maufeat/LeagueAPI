#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameQueuesQueueCustomGame.hpp"
namespace lol {
  inline Result<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1Custom(LeagueClient& _client)
  {
    try {
      return Result<LolGameQueuesQueueCustomGame> {
        _client.https.request("get", "/lol-game-queues/v1/custom?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameQueuesQueueCustomGame> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolGameQueuesV1Custom(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolGameQueuesQueueCustomGame>&)> cb)
  {
    _client.httpsa.request("get", "/lol-game-queues/v1/custom?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolGameQueuesQueueCustomGame> { response });
          else
            cb(_client,Result<LolGameQueuesQueueCustomGame> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
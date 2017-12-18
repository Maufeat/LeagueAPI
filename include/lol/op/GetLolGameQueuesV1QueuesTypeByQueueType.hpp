#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameQueuesQueue.hpp"
namespace lol {
  inline Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesTypeByQueueType(LeagueClient& _client, const std::string& queueType)
  {
    try {
      return ToResult<LolGameQueuesQueue>(_client.https.request("get", "/lol-game-queues/v1/queues/type/"+to_string(queueType)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameQueuesQueue>(e.code());
    }
  }
  inline void GetLolGameQueuesV1QueuesTypeByQueueType(LeagueClient& _client, const std::string& queueType, std::function<void(LeagueClient&, const Result<LolGameQueuesQueue>&)> cb)
  {
    _client.httpsa.request("get", "/lol-game-queues/v1/queues/type/"+to_string(queueType)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameQueuesQueue>(e));
            else
              cb(_client, ToResult<LolGameQueuesQueue>(response));
        });
  }
}
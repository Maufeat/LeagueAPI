#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameQueuesQueueCustomGame.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1CustomNonDefault(T& _client)
  {
    try {
      return ToResult<LolGameQueuesQueueCustomGame>(_client.https.request("get", "/lol-game-queues/v1/custom-non-default?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameQueuesQueueCustomGame>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGameQueuesV1CustomNonDefault(T& _client, std::function<void(T&, const Result<LolGameQueuesQueueCustomGame>&)> cb)
  {
    _client.httpsa.request("get", "/lol-game-queues/v1/custom-non-default?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameQueuesQueueCustomGame>(e));
            else
              cb(_client, ToResult<LolGameQueuesQueueCustomGame>(response));
        });
  }
}
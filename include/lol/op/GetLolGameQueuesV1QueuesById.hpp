#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameQueuesQueue.hpp"
namespace lol {
  inline Result<LolGameQueuesQueue> GetLolGameQueuesV1QueuesById(LeagueClient& _client, const int32_t& id)
  {
    try {
      return ToResult<LolGameQueuesQueue>(_client.https.request("get", "/lol-game-queues/v1/queues/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameQueuesQueue>(e.code());
    }
  }
  inline void GetLolGameQueuesV1QueuesById(LeagueClient& _client, const int32_t& id, std::function<void(LeagueClient&, const Result<LolGameQueuesQueue>&)> cb)
  {
    _client.httpsa.request("get", "/lol-game-queues/v1/queues/"+to_string(id)+"?" +
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
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameQueuesQueueGameTypeConfig.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGameQueuesQueueGameTypeConfig> GetLolGameQueuesV1GameTypeConfigByGameTypeConfigId(T& _client, const uint32_t& gameTypeConfigId)
  {
    try {
      return ToResult<LolGameQueuesQueueGameTypeConfig>(_client.https.request("get", "/lol-game-queues/v1/game-type-config/"+to_string(gameTypeConfigId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameQueuesQueueGameTypeConfig>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGameQueuesV1GameTypeConfigByGameTypeConfigId(T& _client, const uint32_t& gameTypeConfigId, std::function<void(T&, const Result<LolGameQueuesQueueGameTypeConfig>&)> cb)
  {
    _client.httpsa.request("get", "/lol-game-queues/v1/game-type-config/"+to_string(gameTypeConfigId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameQueuesQueueGameTypeConfig>(e));
            else
              cb(_client, ToResult<LolGameQueuesQueueGameTypeConfig>(response));
        });
  }
}
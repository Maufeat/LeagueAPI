#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolKrShutdownLawQueueShutdownStatus.hpp"
namespace lol {
  template<typename T>
  inline Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1QueueStatusByQueueId(T& _client, const int32_t& queue_id)
  {
    try {
      return ToResult<LolKrShutdownLawQueueShutdownStatus>(_client.https.request("get", "/lol-kr-shutdown-law/v1/queue-status/"+to_string(queue_id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolKrShutdownLawQueueShutdownStatus>(e.code());
    }
  }
  template<typename T>
  inline void GetLolKrShutdownLawV1QueueStatusByQueueId(T& _client, const int32_t& queue_id, std::function<void(T&, const Result<LolKrShutdownLawQueueShutdownStatus>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-shutdown-law/v1/queue-status/"+to_string(queue_id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolKrShutdownLawQueueShutdownStatus>(e));
            else
              cb(_client, ToResult<LolKrShutdownLawQueueShutdownStatus>(response));
        });
  }
}
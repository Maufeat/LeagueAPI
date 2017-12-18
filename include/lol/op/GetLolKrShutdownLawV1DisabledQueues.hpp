#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::vector<int32_t>> GetLolKrShutdownLawV1DisabledQueues(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<int32_t>>(_client.https.request("get", "/lol-kr-shutdown-law/v1/disabled-queues?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<int32_t>>(e.code());
    }
  }
  inline void GetLolKrShutdownLawV1DisabledQueues(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<int32_t>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-shutdown-law/v1/disabled-queues?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<int32_t>>(e));
            else
              cb(_client, ToResult<std::vector<int32_t>>(response));
        });
  }
}
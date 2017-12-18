#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolKrShutdownLawQueueShutdownStatus.hpp"
namespace lol {
  inline Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1CustomStatus(LeagueClient& _client)
  {
    try {
      return ToResult<LolKrShutdownLawQueueShutdownStatus>(_client.https.request("get", "/lol-kr-shutdown-law/v1/custom-status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolKrShutdownLawQueueShutdownStatus>(e.code());
    }
  }
  inline void GetLolKrShutdownLawV1CustomStatus(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolKrShutdownLawQueueShutdownStatus>&)> cb)
  {
    _client.httpsa.request("get", "/lol-kr-shutdown-law/v1/custom-status?" +
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
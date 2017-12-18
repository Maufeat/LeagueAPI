#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RiotMessagingServiceState.hpp"
namespace lol {
  inline Result<RiotMessagingServiceState> GetRiotMessagingServiceV1State(LeagueClient& _client)
  {
    try {
      return ToResult<RiotMessagingServiceState>(_client.https.request("get", "/riot-messaging-service/v1/state?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RiotMessagingServiceState>(e.code());
    }
  }
  inline void GetRiotMessagingServiceV1State(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RiotMessagingServiceState>&)> cb)
  {
    _client.httpsa.request("get", "/riot-messaging-service/v1/state?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RiotMessagingServiceState>(e));
            else
              cb(_client, ToResult<RiotMessagingServiceState>(response));
        });
  }
}
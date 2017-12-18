#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RiotMessagingServiceSession.hpp"
namespace lol {
  inline Result<RiotMessagingServiceSession> GetRiotMessagingServiceV1Session(LeagueClient& _client)
  {
    try {
      return ToResult<RiotMessagingServiceSession>(_client.https.request("get", "/riot-messaging-service/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RiotMessagingServiceSession>(e.code());
    }
  }
  inline void GetRiotMessagingServiceV1Session(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RiotMessagingServiceSession>&)> cb)
  {
    _client.httpsa.request("get", "/riot-messaging-service/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RiotMessagingServiceSession>(e));
            else
              cb(_client, ToResult<RiotMessagingServiceSession>(response));
        });
  }
}
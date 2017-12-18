#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RiotMessagingServiceSession.hpp"
namespace lol {
  inline Result<RiotMessagingServiceSession> GetRiotMessagingServiceV1Session(LeagueClient& _client)
  {
    try {
      return Result<RiotMessagingServiceSession> {
        _client.https.request("get", "/riot-messaging-service/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RiotMessagingServiceSession> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRiotMessagingServiceV1Session(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RiotMessagingServiceSession>&)> cb)
  {
    _client.httpsa.request("get", "/riot-messaging-service/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RiotMessagingServiceSession> { response });
          else
            cb(_client,Result<RiotMessagingServiceSession> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
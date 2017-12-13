#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RiotMessagingServiceSession.hpp>
namespace lol {
  Result<RiotMessagingServiceSession> GetRiotMessagingServiceV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RiotMessagingServiceSession> {
        _client_.request("get", "/riot-messaging-service/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RiotMessagingServiceSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
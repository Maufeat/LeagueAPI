#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RiotMessagingServiceState.hpp>
namespace lol {
  Result<RiotMessagingServiceState> GetRiotMessagingServiceV1State(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RiotMessagingServiceState> {
        _client_.request("get", "/riot-messaging-service/v1/state?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RiotMessagingServiceState> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
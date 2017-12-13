#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RiotMessagingServiceState.hpp>
namespace lol {
  Result<RiotMessagingServiceState> GetRiotMessagingServiceV1State(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riot-messaging-service/v1/state?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
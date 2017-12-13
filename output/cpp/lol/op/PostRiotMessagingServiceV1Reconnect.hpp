#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotMessagingServiceV1Reconnect(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riot-messaging-service/v1/reconnect?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
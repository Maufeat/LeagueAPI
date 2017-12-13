#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotMessagingServiceV1Connect(const LeagueClient& _client, const std::string& idToken)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riot-messaging-service/v1/connect?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(idToken).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
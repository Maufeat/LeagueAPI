#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostRiotMessagingServiceV1Connect(const LeagueClient& _client, const std::string& idToken)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riot-messaging-service/v1/connect?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(idToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
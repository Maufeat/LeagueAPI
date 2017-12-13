#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolEmailVerificationV1ConfirmEmail(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-email-verification/v1/confirm-email?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
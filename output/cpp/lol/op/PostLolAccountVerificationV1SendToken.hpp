#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationSendTokenRequest.hpp>
#include <lol/def/LolAccountVerificationSendTokenResponse.hpp>
namespace lol {
  Result<LolAccountVerificationSendTokenResponse> PostLolAccountVerificationV1SendToken(const LeagueClient& _client, const LolAccountVerificationSendTokenRequest& SendTokenRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-account-verification/v1/send-token?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(SendTokenRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
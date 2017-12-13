#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationVerifyResponse.hpp>
#include <lol/def/LolAccountVerificationVerifyRequest.hpp>
namespace lol {
  Result<LolAccountVerificationVerifyResponse> PostLolAccountVerificationV1Verify(const LeagueClient& _client, const LolAccountVerificationVerifyRequest& VerifyRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-account-verification/v1/verify?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(VerifyRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
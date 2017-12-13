#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationIsVerifiedResponse.hpp>
namespace lol {
  Result<LolAccountVerificationIsVerifiedResponse> GetLolAccountVerificationV1IsVerified(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-account-verification/v1/is-verified?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationInvalidateResponse.hpp>
namespace lol {
  Result<LolAccountVerificationInvalidateResponse> PostLolAccountVerificationV1Invalidate(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-account-verification/v1/invalidate?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
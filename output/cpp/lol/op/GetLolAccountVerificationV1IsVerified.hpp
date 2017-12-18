#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationIsVerifiedResponse.hpp>
namespace lol {
  inline Result<LolAccountVerificationIsVerifiedResponse> GetLolAccountVerificationV1IsVerified(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAccountVerificationIsVerifiedResponse> {
        _client_.request("get", "/lol-account-verification/v1/is-verified?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationIsVerifiedResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
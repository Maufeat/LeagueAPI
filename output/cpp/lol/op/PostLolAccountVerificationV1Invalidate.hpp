#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationInvalidateResponse.hpp>
namespace lol {
  inline Result<LolAccountVerificationInvalidateResponse> PostLolAccountVerificationV1Invalidate(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAccountVerificationInvalidateResponse> {
        _client_.request("post", "/lol-account-verification/v1/invalidate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationInvalidateResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
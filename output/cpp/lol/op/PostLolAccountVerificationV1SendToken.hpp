#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationSendTokenRequest.hpp>
#include <lol/def/LolAccountVerificationSendTokenResponse.hpp>
namespace lol {
  inline Result<LolAccountVerificationSendTokenResponse> PostLolAccountVerificationV1SendToken(const LeagueClient& _client, const LolAccountVerificationSendTokenRequest& SendTokenRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAccountVerificationSendTokenResponse> {
        _client_.request("post", "/lol-account-verification/v1/send-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(SendTokenRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationSendTokenResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
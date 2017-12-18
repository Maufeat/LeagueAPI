#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationVerifyResponse.hpp"
#include "../def/LolAccountVerificationVerifyRequest.hpp"
namespace lol {
  inline Result<LolAccountVerificationVerifyResponse> PostLolAccountVerificationV1Verify(LeagueClient& _client, const LolAccountVerificationVerifyRequest& VerifyRequest)
  {
    try {
      return ToResult<LolAccountVerificationVerifyResponse>(_client.https.request("post", "/lol-account-verification/v1/verify?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(VerifyRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAccountVerificationVerifyResponse>(e.code());
    }
  }
  inline void PostLolAccountVerificationV1Verify(LeagueClient& _client, const LolAccountVerificationVerifyRequest& VerifyRequest, std::function<void(LeagueClient&, const Result<LolAccountVerificationVerifyResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-account-verification/v1/verify?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(VerifyRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAccountVerificationVerifyResponse>(e));
            else
              cb(_client, ToResult<LolAccountVerificationVerifyResponse>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationSendTokenRequest.hpp"
#include "../def/LolAccountVerificationSendTokenResponse.hpp"
namespace lol {
  inline Result<LolAccountVerificationSendTokenResponse> PostLolAccountVerificationV1SendToken(LeagueClient& _client, const LolAccountVerificationSendTokenRequest& SendTokenRequest)
  {
    try {
      return ToResult<LolAccountVerificationSendTokenResponse>(_client.https.request("post", "/lol-account-verification/v1/send-token?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(SendTokenRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAccountVerificationSendTokenResponse>(e.code());
    }
  }
  inline void PostLolAccountVerificationV1SendToken(LeagueClient& _client, const LolAccountVerificationSendTokenRequest& SendTokenRequest, std::function<void(LeagueClient&, const Result<LolAccountVerificationSendTokenResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-account-verification/v1/send-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(SendTokenRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAccountVerificationSendTokenResponse>(e));
            else
              cb(_client, ToResult<LolAccountVerificationSendTokenResponse>(response));
        });
  }
}
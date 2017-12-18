#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationSendTokenResponse.hpp"
#include "../def/LolAccountVerificationSendTokenRequest.hpp"
namespace lol {
  inline Result<LolAccountVerificationSendTokenResponse> PostLolAccountVerificationV1SendToken(LeagueClient& _client, const LolAccountVerificationSendTokenRequest& SendTokenRequest)
  {
    try {
      return Result<LolAccountVerificationSendTokenResponse> {
        _client.https.request("post", "/lol-account-verification/v1/send-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(SendTokenRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationSendTokenResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolAccountVerificationV1SendToken(LeagueClient& _client, const LolAccountVerificationSendTokenRequest& SendTokenRequest, std::function<void(LeagueClient&,const Result<LolAccountVerificationSendTokenResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-account-verification/v1/send-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(SendTokenRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolAccountVerificationSendTokenResponse> { response });
          else
            cb(_client,Result<LolAccountVerificationSendTokenResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
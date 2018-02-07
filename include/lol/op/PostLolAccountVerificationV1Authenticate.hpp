#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationAuthenticateResponse.hpp"
#include "../def/LolAccountVerificationAuthenticateRequest.hpp"
namespace lol {
  template<typename T>
  inline Result<LolAccountVerificationAuthenticateResponse> PostLolAccountVerificationV1Authenticate(T& _client, const LolAccountVerificationAuthenticateRequest& AuthenticateRequest)
  {
    try {
      return ToResult<LolAccountVerificationAuthenticateResponse>(_client.https.request("post", "/lol-account-verification/v1/authenticate?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(AuthenticateRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAccountVerificationAuthenticateResponse>(e.code());
    }
  }
  template<typename T>
  inline void PostLolAccountVerificationV1Authenticate(T& _client, const LolAccountVerificationAuthenticateRequest& AuthenticateRequest, std::function<void(T&, const Result<LolAccountVerificationAuthenticateResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-account-verification/v1/authenticate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(AuthenticateRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAccountVerificationAuthenticateResponse>(e));
            else
              cb(_client, ToResult<LolAccountVerificationAuthenticateResponse>(response));
        });
  }
}
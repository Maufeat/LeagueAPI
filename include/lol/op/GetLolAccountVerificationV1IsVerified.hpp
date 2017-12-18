#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationIsVerifiedResponse.hpp"
namespace lol {
  inline Result<LolAccountVerificationIsVerifiedResponse> GetLolAccountVerificationV1IsVerified(LeagueClient& _client)
  {
    try {
      return ToResult<LolAccountVerificationIsVerifiedResponse>(_client.https.request("get", "/lol-account-verification/v1/is-verified?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAccountVerificationIsVerifiedResponse>(e.code());
    }
  }
  inline void GetLolAccountVerificationV1IsVerified(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolAccountVerificationIsVerifiedResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-account-verification/v1/is-verified?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAccountVerificationIsVerifiedResponse>(e));
            else
              cb(_client, ToResult<LolAccountVerificationIsVerifiedResponse>(response));
        });
  }
}
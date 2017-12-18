#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationInvalidateResponse.hpp"
namespace lol {
  inline Result<LolAccountVerificationInvalidateResponse> PostLolAccountVerificationV1Invalidate(LeagueClient& _client)
  {
    try {
      return ToResult<LolAccountVerificationInvalidateResponse>(_client.https.request("post", "/lol-account-verification/v1/invalidate?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAccountVerificationInvalidateResponse>(e.code());
    }
  }
  inline void PostLolAccountVerificationV1Invalidate(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolAccountVerificationInvalidateResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-account-verification/v1/invalidate?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAccountVerificationInvalidateResponse>(e));
            else
              cb(_client, ToResult<LolAccountVerificationInvalidateResponse>(response));
        });
  }
}
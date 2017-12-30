#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEmailVerificationEmailVerificationSession.hpp"
namespace lol {
  template<typename T>
  inline Result<LolEmailVerificationEmailVerificationSession> GetLolEmailVerificationV1Email(T& _client)
  {
    try {
      return ToResult<LolEmailVerificationEmailVerificationSession>(_client.https.request("get", "/lol-email-verification/v1/email?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolEmailVerificationEmailVerificationSession>(e.code());
    }
  }
  template<typename T>
  inline void GetLolEmailVerificationV1Email(T& _client, std::function<void(T&, const Result<LolEmailVerificationEmailVerificationSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-email-verification/v1/email?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolEmailVerificationEmailVerificationSession>(e));
            else
              cb(_client, ToResult<LolEmailVerificationEmailVerificationSession>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthUserInfo.hpp"
namespace lol {
  inline Result<RsoAuthUserInfo> PostRsoAuthV1AuthorizationUserinfo(LeagueClient& _client)
  {
    try {
      return ToResult<RsoAuthUserInfo>(_client.https.request("post", "/rso-auth/v1/authorization/userinfo?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthUserInfo>(e.code());
    }
  }
  inline void PostRsoAuthV1AuthorizationUserinfo(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RsoAuthUserInfo>&)> cb)
  {
    _client.httpsa.request("post", "/rso-auth/v1/authorization/userinfo?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthUserInfo>(e));
            else
              cb(_client, ToResult<RsoAuthUserInfo>(response));
        });
  }
}
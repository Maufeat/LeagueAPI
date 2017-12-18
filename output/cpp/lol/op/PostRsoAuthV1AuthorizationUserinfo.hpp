#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthUserInfo.hpp"
namespace lol {
  inline Result<RsoAuthUserInfo> PostRsoAuthV1AuthorizationUserinfo(LeagueClient& _client)
  {
    try {
      return Result<RsoAuthUserInfo> {
        _client.https.request("post", "/rso-auth/v1/authorization/userinfo?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthUserInfo> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostRsoAuthV1AuthorizationUserinfo(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RsoAuthUserInfo>&)> cb)
  {
    _client.httpsa.request("post", "/rso-auth/v1/authorization/userinfo?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RsoAuthUserInfo> { response });
          else
            cb(_client,Result<RsoAuthUserInfo> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
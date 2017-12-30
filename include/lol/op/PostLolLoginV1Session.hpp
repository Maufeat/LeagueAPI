#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginUsernameAndPassword.hpp"
#include "../def/LolLoginLoginSession.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLoginLoginSession> PostLolLoginV1Session(T& _client, const LolLoginUsernameAndPassword& UsernameAndPassword)
  {
    try {
      return ToResult<LolLoginLoginSession>(_client.https.request("post", "/lol-login/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(UsernameAndPassword).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLoginLoginSession>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLoginV1Session(T& _client, const LolLoginUsernameAndPassword& UsernameAndPassword, std::function<void(T&, const Result<LolLoginLoginSession>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(UsernameAndPassword).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLoginLoginSession>(e));
            else
              cb(_client, ToResult<LolLoginLoginSession>(response));
        });
  }
}
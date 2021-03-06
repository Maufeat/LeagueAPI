#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginLoginSession.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLoginLoginSession> GetLolLoginV1Session(T& _client)
  {
    try {
      return ToResult<LolLoginLoginSession>(_client.https.request("get", "/lol-login/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLoginLoginSession>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLoginV1Session(T& _client, std::function<void(T&, const Result<LolLoginLoginSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-login/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLoginLoginSession>(e));
            else
              cb(_client, ToResult<LolLoginLoginSession>(response));
        });
  }
}
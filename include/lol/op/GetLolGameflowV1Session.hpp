#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowSession.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGameflowGameflowSession> GetLolGameflowV1Session(T& _client)
  {
    try {
      return ToResult<LolGameflowGameflowSession>(_client.https.request("get", "/lol-gameflow/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameflowGameflowSession>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGameflowV1Session(T& _client, std::function<void(T&, const Result<LolGameflowGameflowSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameflowGameflowSession>(e));
            else
              cb(_client, ToResult<LolGameflowGameflowSession>(response));
        });
  }
}
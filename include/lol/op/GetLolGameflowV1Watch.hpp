#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowWatchPhase.hpp"
namespace lol {
  template<typename T>
  inline Result<LolGameflowGameflowWatchPhase> GetLolGameflowV1Watch(T& _client)
  {
    try {
      return ToResult<LolGameflowGameflowWatchPhase>(_client.https.request("get", "/lol-gameflow/v1/watch?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolGameflowGameflowWatchPhase>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGameflowV1Watch(T& _client, std::function<void(T&, const Result<LolGameflowGameflowWatchPhase>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/watch?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolGameflowGameflowWatchPhase>(e));
            else
              cb(_client, ToResult<LolGameflowGameflowWatchPhase>(response));
        });
  }
}
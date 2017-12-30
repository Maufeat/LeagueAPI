#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ActiveBoosts.hpp"
namespace lol {
  template<typename T>
  inline Result<ActiveBoosts> GetLolActiveBoostsV1ActiveBoosts(T& _client)
  {
    try {
      return ToResult<ActiveBoosts>(_client.https.request("get", "/lol-active-boosts/v1/active-boosts?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ActiveBoosts>(e.code());
    }
  }
  template<typename T>
  inline void GetLolActiveBoostsV1ActiveBoosts(T& _client, std::function<void(T&, const Result<ActiveBoosts>&)> cb)
  {
    _client.httpsa.request("get", "/lol-active-boosts/v1/active-boosts?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ActiveBoosts>(e));
            else
              cb(_client, ToResult<ActiveBoosts>(response));
        });
  }
}
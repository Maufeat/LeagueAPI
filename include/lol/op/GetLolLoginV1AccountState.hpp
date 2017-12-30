#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginAccountStateResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLoginAccountStateResource> GetLolLoginV1AccountState(T& _client)
  {
    try {
      return ToResult<LolLoginAccountStateResource>(_client.https.request("get", "/lol-login/v1/account-state?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLoginAccountStateResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLoginV1AccountState(T& _client, std::function<void(T&, const Result<LolLoginAccountStateResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-login/v1/account-state?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLoginAccountStateResource>(e));
            else
              cb(_client, ToResult<LolLoginAccountStateResource>(response));
        });
  }
}
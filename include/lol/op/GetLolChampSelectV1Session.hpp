#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectSession.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectChampSelectSession> GetLolChampSelectV1Session(T& _client)
  {
    try {
      return ToResult<LolChampSelectChampSelectSession>(_client.https.request("get", "/lol-champ-select/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectSession>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1Session(T& _client, std::function<void(T&, const Result<LolChampSelectChampSelectSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectSession>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectSession>(response));
        });
  }
}
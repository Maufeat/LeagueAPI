#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectTimer.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectChampSelectTimer> GetLolChampSelectV1SessionTimer(T& _client)
  {
    try {
      return ToResult<LolChampSelectChampSelectTimer>(_client.https.request("get", "/lol-champ-select/v1/session/timer?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectTimer>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1SessionTimer(T& _client, std::function<void(T&, const Result<LolChampSelectChampSelectTimer>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/session/timer?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectTimer>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectTimer>(response));
        });
  }
}
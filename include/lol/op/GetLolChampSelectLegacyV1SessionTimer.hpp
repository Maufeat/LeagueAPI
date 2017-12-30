#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectTimer.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectLegacyChampSelectTimer> GetLolChampSelectLegacyV1SessionTimer(T& _client)
  {
    try {
      return ToResult<LolChampSelectLegacyChampSelectTimer>(_client.https.request("get", "/lol-champ-select-legacy/v1/session/timer?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectLegacyChampSelectTimer>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectLegacyV1SessionTimer(T& _client, std::function<void(T&, const Result<LolChampSelectLegacyChampSelectTimer>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/session/timer?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectLegacyChampSelectTimer>(e));
            else
              cb(_client, ToResult<LolChampSelectLegacyChampSelectTimer>(response));
        });
  }
}
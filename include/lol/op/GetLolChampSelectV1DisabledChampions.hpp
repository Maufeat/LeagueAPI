#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectDisabledChampions.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectChampSelectDisabledChampions> GetLolChampSelectV1DisabledChampions(T& _client)
  {
    try {
      return ToResult<LolChampSelectChampSelectDisabledChampions>(_client.https.request("get", "/lol-champ-select/v1/disabled-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectDisabledChampions>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1DisabledChampions(T& _client, std::function<void(T&, const Result<LolChampSelectChampSelectDisabledChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/disabled-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectDisabledChampions>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectDisabledChampions>(response));
        });
  }
}
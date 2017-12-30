#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectPickableChampions.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectChampSelectPickableChampions> GetLolChampSelectV1PickableChampions(T& _client)
  {
    try {
      return ToResult<LolChampSelectChampSelectPickableChampions>(_client.https.request("get", "/lol-champ-select/v1/pickable-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectPickableChampions>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1PickableChampions(T& _client, std::function<void(T&, const Result<LolChampSelectChampSelectPickableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/pickable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectPickableChampions>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectPickableChampions>(response));
        });
  }
}
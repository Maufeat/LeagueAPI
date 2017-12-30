#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectPickableSkins.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectChampSelectPickableSkins> GetLolChampSelectV1PickableSkins(T& _client)
  {
    try {
      return ToResult<LolChampSelectChampSelectPickableSkins>(_client.https.request("get", "/lol-champ-select/v1/pickable-skins?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectPickableSkins>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1PickableSkins(T& _client, std::function<void(T&, const Result<LolChampSelectChampSelectPickableSkins>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/pickable-skins?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectPickableSkins>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectPickableSkins>(response));
        });
  }
}
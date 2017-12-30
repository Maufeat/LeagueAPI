#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectPickableChampions.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectLegacyChampSelectPickableChampions> GetLolChampSelectLegacyV1PickableChampions(T& _client)
  {
    try {
      return ToResult<LolChampSelectLegacyChampSelectPickableChampions>(_client.https.request("get", "/lol-champ-select-legacy/v1/pickable-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectLegacyChampSelectPickableChampions>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectLegacyV1PickableChampions(T& _client, std::function<void(T&, const Result<LolChampSelectLegacyChampSelectPickableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/pickable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectLegacyChampSelectPickableChampions>(e));
            else
              cb(_client, ToResult<LolChampSelectLegacyChampSelectPickableChampions>(response));
        });
  }
}
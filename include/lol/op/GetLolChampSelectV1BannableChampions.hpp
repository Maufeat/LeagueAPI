#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectBannableChampions.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChampSelectChampSelectBannableChampions> GetLolChampSelectV1BannableChampions(T& _client)
  {
    try {
      return ToResult<LolChampSelectChampSelectBannableChampions>(_client.https.request("get", "/lol-champ-select/v1/bannable-champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectBannableChampions>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectV1BannableChampions(T& _client, std::function<void(T&, const Result<LolChampSelectChampSelectBannableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/bannable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectBannableChampions>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectBannableChampions>(response));
        });
  }
}
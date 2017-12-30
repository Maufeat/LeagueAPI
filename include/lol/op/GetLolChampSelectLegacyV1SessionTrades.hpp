#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> GetLolChampSelectLegacyV1SessionTrades(T& _client)
  {
    try {
      return ToResult<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(_client.https.request("get", "/lol-champ-select-legacy/v1/session/trades?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChampSelectLegacyV1SessionTrades(T& _client, std::function<void(T&, const Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/session/trades?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(e));
            else
              cb(_client, ToResult<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(response));
        });
  }
}
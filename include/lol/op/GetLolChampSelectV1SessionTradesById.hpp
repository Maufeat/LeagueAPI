#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectTradeContract.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectTradeContract> GetLolChampSelectV1SessionTradesById(LeagueClient& _client, const int64_t& id)
  {
    try {
      return ToResult<LolChampSelectChampSelectTradeContract>(_client.https.request("get", "/lol-champ-select/v1/session/trades/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectChampSelectTradeContract>(e.code());
    }
  }
  inline void GetLolChampSelectV1SessionTradesById(LeagueClient& _client, const int64_t& id, std::function<void(LeagueClient&, const Result<LolChampSelectChampSelectTradeContract>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/session/trades/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectChampSelectTradeContract>(e));
            else
              cb(_client, ToResult<LolChampSelectChampSelectTradeContract>(response));
        });
  }
}
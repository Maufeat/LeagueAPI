#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace lol {
  inline Result<LolChampSelectLegacyChampSelectTradeContract> PostLolChampSelectLegacyV1SessionTradesByIdRequest(LeagueClient& _client, const int64_t& id)
  {
    try {
      return ToResult<LolChampSelectLegacyChampSelectTradeContract>(_client.https.request("post", "/lol-champ-select-legacy/v1/session/trades/"+to_string(id)+"/request?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChampSelectLegacyChampSelectTradeContract>(e.code());
    }
  }
  inline void PostLolChampSelectLegacyV1SessionTradesByIdRequest(LeagueClient& _client, const int64_t& id, std::function<void(LeagueClient&, const Result<LolChampSelectLegacyChampSelectTradeContract>&)> cb)
  {
    _client.httpsa.request("post", "/lol-champ-select-legacy/v1/session/trades/"+to_string(id)+"/request?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChampSelectLegacyChampSelectTradeContract>(e));
            else
              cb(_client, ToResult<LolChampSelectLegacyChampSelectTradeContract>(response));
        });
  }
}
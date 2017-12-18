#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace lol {
  inline Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> GetLolChampSelectLegacyV1SessionTrades(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> {
        _client.https.request("get", "/lol-champ-select-legacy/v1/session/trades?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampSelectLegacyV1SessionTrades(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/session/trades?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> { response });
          else
            cb(_client,Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
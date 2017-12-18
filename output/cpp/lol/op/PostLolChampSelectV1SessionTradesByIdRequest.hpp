#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectTradeContract.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectTradeContract> PostLolChampSelectV1SessionTradesByIdRequest(LeagueClient& _client, const int64_t& id)
  {
    try {
      return Result<LolChampSelectChampSelectTradeContract> {
        _client.https.request("post", "/lol-champ-select/v1/session/trades/"+to_string(id)+"/request?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectTradeContract> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolChampSelectV1SessionTradesByIdRequest(LeagueClient& _client, const int64_t& id, std::function<void(LeagueClient&,const Result<LolChampSelectChampSelectTradeContract>&)> cb)
  {
    _client.httpsa.request("post", "/lol-champ-select/v1/session/trades/"+to_string(id)+"/request?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampSelectChampSelectTradeContract> { response });
          else
            cb(_client,Result<LolChampSelectChampSelectTradeContract> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
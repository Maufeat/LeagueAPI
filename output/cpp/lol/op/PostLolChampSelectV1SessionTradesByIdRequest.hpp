#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectTradeContract.hpp>
namespace lol {
  inline Result<LolChampSelectChampSelectTradeContract> PostLolChampSelectV1SessionTradesByIdRequest(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectChampSelectTradeContract> {
        _client_.request("post", "/lol-champ-select/v1/session/trades/"+to_string(id)+"/request?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectTradeContract> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
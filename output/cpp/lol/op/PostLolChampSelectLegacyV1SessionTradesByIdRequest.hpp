#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectTradeContract.hpp>
namespace lol {
  inline Result<LolChampSelectLegacyChampSelectTradeContract> PostLolChampSelectLegacyV1SessionTradesByIdRequest(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectLegacyChampSelectTradeContract> {
        _client_.request("post", "/lol-champ-select-legacy/v1/session/trades/"+to_string(id)+"/request?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyChampSelectTradeContract> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolChampSelectLegacyV1SessionTradesByIdCancel(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-champ-select-legacy/v1/session/trades/"+to_string(id)+"/cancel?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectTradeContract.hpp>
namespace lol {
  Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> GetLolChampSelectLegacyV1SessionTrades(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champ-select-legacy/v1/session/trades?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
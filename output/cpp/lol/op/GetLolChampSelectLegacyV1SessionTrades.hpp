#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace lol {
  inline Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> GetLolChampSelectLegacyV1SessionTrades(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> {
        _client_.request("get", "/lol-champ-select-legacy/v1/session/trades?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
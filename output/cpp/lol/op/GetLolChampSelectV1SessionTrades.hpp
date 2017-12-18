#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampSelectChampSelectTradeContract.hpp"
namespace lol {
  inline Result<std::vector<LolChampSelectChampSelectTradeContract>> GetLolChampSelectV1SessionTrades(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChampSelectChampSelectTradeContract>> {
        _client_.request("get", "/lol-champ-select/v1/session/trades?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChampSelectChampSelectTradeContract>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
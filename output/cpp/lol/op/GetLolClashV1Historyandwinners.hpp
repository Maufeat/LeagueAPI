#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentHistoryAndWinners.hpp>
namespace lol {
  Result<LolClashTournamentHistoryAndWinners> GetLolClashV1Historyandwinners(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashTournamentHistoryAndWinners> {
        _client_.request("get", "/lol-clash/v1/historyandwinners?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashTournamentHistoryAndWinners> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
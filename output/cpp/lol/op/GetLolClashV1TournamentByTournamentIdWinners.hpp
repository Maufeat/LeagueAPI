#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashTournamentWinnerHistory.hpp"
namespace lol {
  inline Result<LolClashTournamentWinnerHistory> GetLolClashV1TournamentByTournamentIdWinners(const LeagueClient& _client, const int64_t& tournamentId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashTournamentWinnerHistory> {
        _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/winners?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashTournamentWinnerHistory> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
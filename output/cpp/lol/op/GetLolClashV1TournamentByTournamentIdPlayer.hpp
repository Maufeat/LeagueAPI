#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashPlayerTournamentData.hpp>
namespace lol {
  Result<LolClashPlayerTournamentData> GetLolClashV1TournamentByTournamentIdPlayer(const LeagueClient& _client, const int64_t& tournamentId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashPlayerTournamentData> {
        _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlayerTournamentData> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
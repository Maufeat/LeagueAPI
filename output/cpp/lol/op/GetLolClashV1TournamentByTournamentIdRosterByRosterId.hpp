#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRoster.hpp>
namespace lol {
  inline Result<LolClashRoster> GetLolClashV1TournamentByTournamentIdRosterByRosterId(const LeagueClient& _client, const int64_t& tournamentId, const std::string& rosterId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashRoster> {
        _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashRoster> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
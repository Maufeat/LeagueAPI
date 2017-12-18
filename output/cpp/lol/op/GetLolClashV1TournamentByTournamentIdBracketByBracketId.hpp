#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashBracket.hpp"
namespace lol {
  inline Result<LolClashBracket> GetLolClashV1TournamentByTournamentIdBracketByBracketId(const LeagueClient& _client, const int64_t& tournamentId, const int64_t& bracketId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashBracket> {
        _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/bracket/"+to_string(bracketId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashBracket> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
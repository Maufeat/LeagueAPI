#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashBracket.hpp>
namespace lol {
  Result<LolClashBracket> GetLolClashV1TournamentByTournamentIdBracketByBracketId(const LeagueClient& _client, const int64_t& tournamentId, const int64_t& bracketId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/bracket/"+to_string(bracketId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashChangeIconRequest.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterChangeIcon(const LeagueClient& _client, const int64_t& tournamentId, const LolClashChangeIconRequest& changeIconRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/change-icon?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(changeIconRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRosterDetails.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterChangeAllDetails(const LeagueClient& _client, const int64_t& tournamentId, const LolClashRosterDetails& rosterDetails)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/change-all-details?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(rosterDetails).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashInviteSubRequest.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite(const LeagueClient& _client, const int64_t& tournamentId, const LolClashInviteSubRequest& inviteSubRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(inviteSubRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
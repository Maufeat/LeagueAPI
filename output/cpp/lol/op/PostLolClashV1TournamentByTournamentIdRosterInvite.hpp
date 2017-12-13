#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/FailedInvite.hpp>
namespace lol {
  Result<std::vector<FailedInvite>> PostLolClashV1TournamentByTournamentIdRosterInvite(const LeagueClient& _client, const int64_t& tournamentId, const std::vector<uint64_t>& summonerIds)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/invite?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(summonerIds).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
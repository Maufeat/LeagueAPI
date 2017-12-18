#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/FailedInvite.hpp>
namespace lol {
  inline Result<std::vector<FailedInvite>> PostLolClashV1TournamentByTournamentIdRosterInvite(const LeagueClient& _client, const int64_t& tournamentId, const std::vector<uint64_t>& summonerIds)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<FailedInvite>> {
        _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/invite?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(summonerIds).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<FailedInvite>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
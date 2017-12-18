#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashInviteSubRequest.hpp>
namespace lol {
  inline Result<json> PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite(const LeagueClient& _client, const int64_t& tournamentId, const LolClashInviteSubRequest& inviteSubRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(inviteSubRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
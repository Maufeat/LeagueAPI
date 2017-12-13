#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashChangeNameRequest.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterChangeShortName(const LeagueClient& _client, const int64_t& tournamentId, const LolClashChangeNameRequest& changeNameRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/change-short-name?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(changeNameRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
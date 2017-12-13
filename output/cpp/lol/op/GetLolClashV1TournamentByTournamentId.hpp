#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournament.hpp>
namespace lol {
  Result<LolClashTournament> GetLolClashV1TournamentByTournamentId(const LeagueClient& _client, const int64_t& tournamentId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
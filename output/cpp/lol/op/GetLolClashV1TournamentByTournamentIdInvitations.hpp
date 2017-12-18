#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashRoster.hpp>
namespace lol {
  inline Result<std::vector<LolClashRoster>> GetLolClashV1TournamentByTournamentIdInvitations(const LeagueClient& _client, const int64_t& tournamentId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashRoster>> {
        _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashRoster>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
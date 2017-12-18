#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolClashV1TournamentByTournamentIdRosterByRosterIdAccept(const LeagueClient& _client, const int64_t& tournamentId, const std::string& rosterId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"/accept?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
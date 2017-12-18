#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashTournamentSummary.hpp"
namespace lol {
  inline Result<std::vector<LolClashTournamentSummary>> GetLolClashV1TournamentSummary(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashTournamentSummary>> {
        _client_.request("get", "/lol-clash/v1/tournament-summary?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashTournamentSummary>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
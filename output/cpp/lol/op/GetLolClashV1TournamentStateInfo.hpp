#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentStateInfo.hpp>
namespace lol {
  Result<std::vector<LolClashTournamentStateInfo>> GetLolClashV1TournamentStateInfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashTournamentStateInfo>> {
        _client_.request("get", "/lol-clash/v1/tournament-state-info?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashTournamentStateInfo>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
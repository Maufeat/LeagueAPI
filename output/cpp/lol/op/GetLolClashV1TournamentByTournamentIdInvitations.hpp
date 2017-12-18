#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRoster.hpp"
namespace lol {
  inline Result<std::vector<LolClashRoster>> GetLolClashV1TournamentByTournamentIdInvitations(LeagueClient& _client, const int64_t& tournamentId)
  {
    try {
      return Result<std::vector<LolClashRoster>> {
        _client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashRoster>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1TournamentByTournamentIdInvitations(LeagueClient& _client, const int64_t& tournamentId, std::function<void(LeagueClient&,const Result<std::vector<LolClashRoster>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolClashRoster>> { response });
          else
            cb(_client,Result<std::vector<LolClashRoster>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
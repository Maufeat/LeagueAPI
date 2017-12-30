#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRoster.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolClashRoster>> GetLolClashV1TournamentByTournamentIdInvitations(T& _client, const int64_t& tournamentId)
  {
    try {
      return ToResult<std::vector<LolClashRoster>>(_client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/invitations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashRoster>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentByTournamentIdInvitations(T& _client, const int64_t& tournamentId, std::function<void(T&, const Result<std::vector<LolClashRoster>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashRoster>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashRoster>>(response));
        });
  }
}
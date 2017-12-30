#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashRoster.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashRoster> GetLolClashV1TournamentByTournamentIdRosterByRosterId(T& _client, const int64_t& tournamentId, const std::string& rosterId)
  {
    try {
      return ToResult<LolClashRoster>(_client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashRoster>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentByTournamentIdRosterByRosterId(T& _client, const int64_t& tournamentId, const std::string& rosterId, std::function<void(T&, const Result<LolClashRoster>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashRoster>(e));
            else
              cb(_client, ToResult<LolClashRoster>(response));
        });
  }
}
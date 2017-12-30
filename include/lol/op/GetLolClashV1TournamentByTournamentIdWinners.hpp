#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentWinnerHistory.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashTournamentWinnerHistory> GetLolClashV1TournamentByTournamentIdWinners(T& _client, const int64_t& tournamentId)
  {
    try {
      return ToResult<LolClashTournamentWinnerHistory>(_client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/winners?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashTournamentWinnerHistory>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentByTournamentIdWinners(T& _client, const int64_t& tournamentId, std::function<void(T&, const Result<LolClashTournamentWinnerHistory>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/winners?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashTournamentWinnerHistory>(e));
            else
              cb(_client, ToResult<LolClashTournamentWinnerHistory>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournament.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashTournament> GetLolClashV1TournamentByTournamentId(T& _client, const int64_t& tournamentId)
  {
    try {
      return ToResult<LolClashTournament>(_client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashTournament>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentByTournamentId(T& _client, const int64_t& tournamentId, std::function<void(T&, const Result<LolClashTournament>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashTournament>(e));
            else
              cb(_client, ToResult<LolClashTournament>(response));
        });
  }
}
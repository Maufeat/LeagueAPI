#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerTournamentData.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashPlayerTournamentData> GetLolClashV1TournamentByTournamentIdPlayer(T& _client, const int64_t& tournamentId)
  {
    try {
      return ToResult<LolClashPlayerTournamentData>(_client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/player?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashPlayerTournamentData>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1TournamentByTournamentIdPlayer(T& _client, const int64_t& tournamentId, std::function<void(T&, const Result<LolClashPlayerTournamentData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/player?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashPlayerTournamentData>(e));
            else
              cb(_client, ToResult<LolClashPlayerTournamentData>(response));
        });
  }
}
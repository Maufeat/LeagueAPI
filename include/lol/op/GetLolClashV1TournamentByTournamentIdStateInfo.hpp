#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentStateInfo.hpp"
namespace lol {
  inline Result<LolClashTournamentStateInfo> GetLolClashV1TournamentByTournamentIdStateInfo(LeagueClient& _client, const int64_t& tournamentId)
  {
    try {
      return ToResult<LolClashTournamentStateInfo>(_client.https.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/stateInfo?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashTournamentStateInfo>(e.code());
    }
  }
  inline void GetLolClashV1TournamentByTournamentIdStateInfo(LeagueClient& _client, const int64_t& tournamentId, std::function<void(LeagueClient&, const Result<LolClashTournamentStateInfo>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/stateInfo?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashTournamentStateInfo>(e));
            else
              cb(_client, ToResult<LolClashTournamentStateInfo>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentSummary.hpp"
namespace lol {
  inline Result<std::vector<LolClashTournamentSummary>> GetLolClashV1TournamentSummary(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolClashTournamentSummary>>(_client.https.request("get", "/lol-clash/v1/tournament-summary?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashTournamentSummary>>(e.code());
    }
  }
  inline void GetLolClashV1TournamentSummary(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolClashTournamentSummary>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament-summary?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashTournamentSummary>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashTournamentSummary>>(response));
        });
  }
}
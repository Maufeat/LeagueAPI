#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentSummary.hpp"
namespace lol {
  inline Result<std::vector<LolClashTournamentSummary>> GetLolClashV1TournamentSummary(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolClashTournamentSummary>> {
        _client.https.request("get", "/lol-clash/v1/tournament-summary?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashTournamentSummary>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1TournamentSummary(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolClashTournamentSummary>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament-summary?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolClashTournamentSummary>> { response });
          else
            cb(_client,Result<std::vector<LolClashTournamentSummary>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
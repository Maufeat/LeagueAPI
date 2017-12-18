#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentHistoryAndWinners.hpp"
namespace lol {
  inline Result<LolClashTournamentHistoryAndWinners> GetLolClashV1Historyandwinners(LeagueClient& _client)
  {
    try {
      return Result<LolClashTournamentHistoryAndWinners> {
        _client.https.request("get", "/lol-clash/v1/historyandwinners?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashTournamentHistoryAndWinners> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1Historyandwinners(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashTournamentHistoryAndWinners>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/historyandwinners?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashTournamentHistoryAndWinners> { response });
          else
            cb(_client,Result<LolClashTournamentHistoryAndWinners> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
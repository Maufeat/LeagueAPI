#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentGameEnd.hpp"
namespace lol {
  inline Result<LolClashTournamentGameEnd> GetLolClashV1GameEnd(LeagueClient& _client)
  {
    try {
      return Result<LolClashTournamentGameEnd> {
        _client.https.request("get", "/lol-clash/v1/gameEnd?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashTournamentGameEnd> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1GameEnd(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashTournamentGameEnd>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/gameEnd?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashTournamentGameEnd> { response });
          else
            cb(_client,Result<LolClashTournamentGameEnd> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
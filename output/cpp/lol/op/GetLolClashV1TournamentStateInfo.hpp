#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentStateInfo.hpp"
namespace lol {
  inline Result<std::vector<LolClashTournamentStateInfo>> GetLolClashV1TournamentStateInfo(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolClashTournamentStateInfo>> {
        _client.https.request("get", "/lol-clash/v1/tournament-state-info?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashTournamentStateInfo>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1TournamentStateInfo(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolClashTournamentStateInfo>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/tournament-state-info?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolClashTournamentStateInfo>> { response });
          else
            cb(_client,Result<std::vector<LolClashTournamentStateInfo>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesApexLeagues.hpp"
namespace lol {
  inline Result<LolLeaguesApexLeagues> GetLolLeaguesV1ChallengerLeagues(LeagueClient& _client)
  {
    try {
      return Result<LolLeaguesApexLeagues> {
        _client.https.request("get", "/lol-leagues/v1/challenger-leagues?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLeaguesApexLeagues> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaguesV1ChallengerLeagues(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLeaguesApexLeagues>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v1/challenger-leagues?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLeaguesApexLeagues> { response });
          else
            cb(_client,Result<LolLeaguesApexLeagues> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
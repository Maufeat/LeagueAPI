#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeagueTeam.hpp"
namespace lol {
  inline Result<LolLeaguesLeagueTeam> GetLolLeaguesV1TeamsById(LeagueClient& _client, const std::string& id)
  {
    try {
      return Result<LolLeaguesLeagueTeam> {
        _client.https.request("get", "/lol-leagues/v1/teams/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLeaguesLeagueTeam> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaguesV1TeamsById(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&,const Result<LolLeaguesLeagueTeam>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v1/teams/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLeaguesLeagueTeam> { response });
          else
            cb(_client,Result<LolLeaguesLeagueTeam> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
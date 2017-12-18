#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesLeagueTeam.hpp>
namespace lol {
  inline Result<LolLeaguesLeagueTeam> GetLolLeaguesV1TeamsById(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLeaguesLeagueTeam> {
        _client_.request("get", "/lol-leagues/v1/teams/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLeaguesLeagueTeam> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
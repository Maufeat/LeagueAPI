#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeagueTeam.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLeaguesLeagueTeam> GetLolLeaguesV1TeamsById(T& _client, const std::string& id)
  {
    try {
      return ToResult<LolLeaguesLeagueTeam>(_client.https.request("get", "/lol-leagues/v1/teams/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLeaguesLeagueTeam>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLeaguesV1TeamsById(T& _client, const std::string& id, std::function<void(T&, const Result<LolLeaguesLeagueTeam>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v1/teams/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLeaguesLeagueTeam>(e));
            else
              cb(_client, ToResult<LolLeaguesLeagueTeam>(response));
        });
  }
}
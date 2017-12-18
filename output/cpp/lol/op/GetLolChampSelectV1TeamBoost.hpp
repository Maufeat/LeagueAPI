#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectTeamBoost.hpp"
namespace lol {
  inline Result<LolChampSelectTeamBoost> GetLolChampSelectV1TeamBoost(LeagueClient& _client)
  {
    try {
      return Result<LolChampSelectTeamBoost> {
        _client.https.request("get", "/lol-champ-select/v1/team-boost?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectTeamBoost> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampSelectV1TeamBoost(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolChampSelectTeamBoost>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select/v1/team-boost?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampSelectTeamBoost> { response });
          else
            cb(_client,Result<LolChampSelectTeamBoost> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
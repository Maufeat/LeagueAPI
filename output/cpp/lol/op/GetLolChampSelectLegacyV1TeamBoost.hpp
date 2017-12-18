#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyTeamBoost.hpp"
namespace lol {
  inline Result<LolChampSelectLegacyTeamBoost> GetLolChampSelectLegacyV1TeamBoost(LeagueClient& _client)
  {
    try {
      return Result<LolChampSelectLegacyTeamBoost> {
        _client.https.request("get", "/lol-champ-select-legacy/v1/team-boost?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyTeamBoost> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampSelectLegacyV1TeamBoost(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolChampSelectLegacyTeamBoost>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champ-select-legacy/v1/team-boost?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampSelectLegacyTeamBoost> { response });
          else
            cb(_client,Result<LolChampSelectLegacyTeamBoost> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
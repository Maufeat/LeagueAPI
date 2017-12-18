#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyTeamBoost.hpp>
namespace lol {
  inline Result<LolChampSelectLegacyTeamBoost> GetLolChampSelectLegacyV1TeamBoost(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectLegacyTeamBoost> {
        _client_.request("get", "/lol-champ-select-legacy/v1/team-boost?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyTeamBoost> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
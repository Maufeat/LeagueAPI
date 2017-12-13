#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyTeamBoost.hpp>
namespace lol {
  Result<LolChampSelectLegacyTeamBoost> GetLolChampSelectLegacyV1TeamBoost(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champ-select-legacy/v1/team-boost?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
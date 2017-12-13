#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectPickableChampions.hpp>
namespace lol {
  Result<LolChampSelectLegacyChampSelectPickableChampions> GetLolChampSelectLegacyV1PickableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champ-select-legacy/v1/pickable-champions?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
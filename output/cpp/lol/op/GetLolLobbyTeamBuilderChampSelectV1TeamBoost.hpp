#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderTeamBoost.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderTeamBoost> GetLolLobbyTeamBuilderChampSelectV1TeamBoost(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/team-boost?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyPositionPreferences.hpp>
namespace lol {
  Result<json> PostLolLobbyTeamBuilderV1PositionPreferences(const LeagueClient& _client, const LolLobbyTeamBuilderLobbyPositionPreferences& positionPreferences)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby-team-builder/v1/position-preferences?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(positionPreferences).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
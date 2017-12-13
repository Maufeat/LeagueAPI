#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyPositionPreferences.hpp>
namespace lol {
  Result<json> PutLolLobbyV1LobbyMembersLocalMemberPositionPreferences(const LeagueClient& _client, const LolLobbyLobbyPositionPreferences& positionPreferences)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-lobby/v1/lobby/members/localMember/position-preferences?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(positionPreferences).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitation.hpp>
namespace lol {
  Result<LolLobbyLobbyInvitation> PostLolLobbyV1LobbyInvitations(const LeagueClient& _client, const LolLobbyLobbyInvitation& invitation)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/lobby/invitations?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(invitation).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
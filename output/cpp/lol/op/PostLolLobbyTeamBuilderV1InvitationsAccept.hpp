#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyInvitation.hpp>
namespace lol {
  Result<json> PostLolLobbyTeamBuilderV1InvitationsAccept(const LeagueClient& _client, const LolLobbyTeamBuilderLobbyInvitation& invitation)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby-team-builder/v1/invitations/accept?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(invitation).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
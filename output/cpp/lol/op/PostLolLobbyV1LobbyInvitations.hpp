#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitation.hpp>
namespace lol {
  inline Result<LolLobbyLobbyInvitation> PostLolLobbyV1LobbyInvitations(const LeagueClient& _client, const LolLobbyLobbyInvitation& invitation)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyInvitation> {
        _client_.request("post", "/lol-lobby/v1/lobby/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyInvitation> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
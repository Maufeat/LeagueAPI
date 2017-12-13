#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitation.hpp>
namespace lol {
  Result<LolLobbyLobbyInvitation> GetLolLobbyV1LobbyInvitationsById(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyInvitation> {
        _client_.request("get", "/lol-lobby/v1/lobby/invitations/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyInvitation> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
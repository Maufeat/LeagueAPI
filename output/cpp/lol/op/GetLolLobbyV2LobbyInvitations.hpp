#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitationDto.hpp>
namespace lol {
  Result<std::vector<LolLobbyLobbyInvitationDto>> GetLolLobbyV2LobbyInvitations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyInvitationDto>> {
        _client_.request("get", "/lol-lobby/v2/lobby/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyInvitationDto>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
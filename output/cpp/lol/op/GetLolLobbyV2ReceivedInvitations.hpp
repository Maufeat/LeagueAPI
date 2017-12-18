#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyReceivedInvitationDto.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyReceivedInvitationDto>> GetLolLobbyV2ReceivedInvitations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyReceivedInvitationDto>> {
        _client_.request("get", "/lol-lobby/v2/received-invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyReceivedInvitationDto>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitationDto.hpp>
namespace lol {
  Result<std::vector<LolLobbyLobbyInvitationDto>> PostLolLobbyV2EogInvitations(const LeagueClient& _client, const std::vector<LolLobbyLobbyInvitationDto>& invitations)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyInvitationDto>> {
        _client_.request("post", "/lol-lobby/v2/eog-invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitations).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyInvitationDto>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
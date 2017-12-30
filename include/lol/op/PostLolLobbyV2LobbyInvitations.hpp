#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitationDto.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLobbyLobbyInvitationDto>> PostLolLobbyV2LobbyInvitations(T& _client, const std::vector<LolLobbyLobbyInvitationDto>& invitations)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyInvitationDto>>(_client.https.request("post", "/lol-lobby/v2/lobby/invitations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(invitations).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyInvitationDto>>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyV2LobbyInvitations(T& _client, const std::vector<LolLobbyLobbyInvitationDto>& invitations, std::function<void(T&, const Result<std::vector<LolLobbyLobbyInvitationDto>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/lobby/invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(invitations).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyInvitationDto>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyInvitationDto>>(response));
        });
  }
}
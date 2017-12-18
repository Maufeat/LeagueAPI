#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitationDto.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyInvitationDto>> PostLolLobbyV2EogInvitations(LeagueClient& _client, const std::vector<LolLobbyLobbyInvitationDto>& invitations)
  {
    try {
      return Result<std::vector<LolLobbyLobbyInvitationDto>> {
        _client.https.request("post", "/lol-lobby/v2/eog-invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitations).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyInvitationDto>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLobbyV2EogInvitations(LeagueClient& _client, const std::vector<LolLobbyLobbyInvitationDto>& invitations, std::function<void(LeagueClient&,const Result<std::vector<LolLobbyLobbyInvitationDto>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/eog-invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitations).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLobbyLobbyInvitationDto>> { response });
          else
            cb(_client,Result<std::vector<LolLobbyLobbyInvitationDto>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
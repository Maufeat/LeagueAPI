#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitation.hpp"
namespace lol {
  inline Result<LolLobbyLobbyInvitation> PostLolLobbyV1LobbyInvitations(LeagueClient& _client, const LolLobbyLobbyInvitation& invitation)
  {
    try {
      return Result<LolLobbyLobbyInvitation> {
        _client.https.request("post", "/lol-lobby/v1/lobby/invitations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyInvitation> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLobbyV1LobbyInvitations(LeagueClient& _client, const LolLobbyLobbyInvitation& invitation, std::function<void(LeagueClient&,const Result<LolLobbyLobbyInvitation>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/lobby/invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobbyInvitation> { response });
          else
            cb(_client,Result<LolLobbyLobbyInvitation> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
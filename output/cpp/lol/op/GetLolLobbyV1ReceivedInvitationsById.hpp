#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyInvitation.hpp>
namespace lol {
  Result<LolLobbyLobbyInvitation> GetLolLobbyV1ReceivedInvitationsById(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/received-invitations/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
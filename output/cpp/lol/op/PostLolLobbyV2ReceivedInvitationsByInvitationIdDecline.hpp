#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolLobbyV2ReceivedInvitationsByInvitationIdDecline(const LeagueClient& _client, const std::string& invitationId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v2/received-invitations/"+to_string(invitationId)+"/decline?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
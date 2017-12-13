#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatUserResource.hpp>
namespace lol {
  Result<json> PostLolChatV1ConversationsByIdParticipants(const LeagueClient& _client, const std::string& id, const LolChatUserResource& invitee)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(invitee).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
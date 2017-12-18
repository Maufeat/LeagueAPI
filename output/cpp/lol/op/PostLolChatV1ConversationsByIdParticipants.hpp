#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatUserResource.hpp"
namespace lol {
  inline Result<json> PostLolChatV1ConversationsByIdParticipants(const LeagueClient& _client, const std::string& id, const LolChatUserResource& invitee)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(invitee).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
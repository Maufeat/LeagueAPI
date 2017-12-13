#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatUserResource.hpp>
namespace lol {
  Result<std::vector<LolChatUserResource>> GetLolChatV1ConversationsByIdParticipants(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
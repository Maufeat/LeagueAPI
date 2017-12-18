#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatUserResource.hpp>
namespace lol {
  inline Result<std::vector<LolChatUserResource>> GetLolChatV1ConversationsByIdParticipants(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChatUserResource>> {
        _client_.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatUserResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
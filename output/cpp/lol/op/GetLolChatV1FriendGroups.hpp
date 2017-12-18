#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatGroupResource.hpp"
namespace lol {
  inline Result<std::vector<LolChatGroupResource>> GetLolChatV1FriendGroups(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChatGroupResource>> {
        _client_.request("get", "/lol-chat/v1/friend-groups?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatGroupResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
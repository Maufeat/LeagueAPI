#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatFriendResource.hpp"
namespace lol {
  inline Result<LolChatFriendResource> GetLolChatV1FriendsById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatFriendResource> {
        _client_.request("get", "/lol-chat/v1/friends/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatFriendResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
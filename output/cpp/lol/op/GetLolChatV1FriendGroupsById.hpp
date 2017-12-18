#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatGroupResource.hpp>
namespace lol {
  inline Result<LolChatGroupResource> GetLolChatV1FriendGroupsById(const LeagueClient& _client, const uint32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatGroupResource> {
        _client_.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatGroupResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
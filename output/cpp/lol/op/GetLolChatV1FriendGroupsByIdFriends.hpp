#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatFriendResource.hpp>
namespace lol {
  Result<std::vector<LolChatFriendResource>> GetLolChatV1FriendGroupsByIdFriends(const LeagueClient& _client, const uint32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"/friends?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
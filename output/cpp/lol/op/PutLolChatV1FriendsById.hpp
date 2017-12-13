#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatFriendResource.hpp>
namespace lol {
  Result<json> PutLolChatV1FriendsById(const LeagueClient& _client, const uint64_t& id, const LolChatFriendResource& contact)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-chat/v1/friends/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(contact).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
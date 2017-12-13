#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatGroupResource.hpp>
namespace lol {
  Result<json> PutLolChatV1FriendGroupsById(const LeagueClient& _client, const uint32_t& id, const LolChatGroupResource& group)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(group).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
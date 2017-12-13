#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolChatV1FriendGroupsById(const LeagueClient& _client, const uint32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
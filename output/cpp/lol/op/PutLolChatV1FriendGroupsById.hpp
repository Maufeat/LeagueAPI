#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatGroupResource.hpp>
namespace lol {
  inline Result<json> PutLolChatV1FriendGroupsById(const LeagueClient& _client, const uint32_t& id, const LolChatGroupResource& group)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(group).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
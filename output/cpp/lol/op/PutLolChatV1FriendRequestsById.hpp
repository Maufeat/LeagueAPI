#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatFriendRequestResource.hpp>
namespace lol {
  Result<json> PutLolChatV1FriendRequestsById(const LeagueClient& _client, const uint64_t& id, const LolChatFriendRequestResource& request)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-chat/v1/friend-requests/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
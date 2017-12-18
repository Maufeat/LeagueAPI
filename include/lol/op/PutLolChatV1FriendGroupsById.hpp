#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatGroupResource.hpp"
namespace lol {
  inline Result<json> PutLolChatV1FriendGroupsById(LeagueClient& _client, const uint32_t& id, const LolChatGroupResource& group)
  {
    try {
      return ToResult<json>(_client.https.request("put", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(group).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PutLolChatV1FriendGroupsById(LeagueClient& _client, const uint32_t& id, const LolChatGroupResource& group, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(group).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
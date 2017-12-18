#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatFriendResource.hpp"
namespace lol {
  inline Result<std::vector<LolChatFriendResource>> GetLolChatV1FriendGroupsByIdFriends(LeagueClient& _client, const uint32_t& id)
  {
    try {
      return ToResult<std::vector<LolChatFriendResource>>(_client.https.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"/friends?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatFriendResource>>(e.code());
    }
  }
  inline void GetLolChatV1FriendGroupsByIdFriends(LeagueClient& _client, const uint32_t& id, std::function<void(LeagueClient&, const Result<std::vector<LolChatFriendResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"/friends?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatFriendResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatFriendResource>>(response));
        });
  }
}
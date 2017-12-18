#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatFriendResource.hpp"
namespace lol {
  inline Result<std::vector<LolChatFriendResource>> GetLolChatV1Friends(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolChatFriendResource>> {
        _client.https.request("get", "/lol-chat/v1/friends?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatFriendResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChatV1Friends(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolChatFriendResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friends?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolChatFriendResource>> { response });
          else
            cb(_client,Result<std::vector<LolChatFriendResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
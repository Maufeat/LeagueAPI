#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatFriendResource.hpp>
namespace lol {
  Result<std::vector<LolChatFriendResource>> GetLolChatV1Friends(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/friends?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
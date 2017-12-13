#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolChatV1ConversationsNotify(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/conversations/notify?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
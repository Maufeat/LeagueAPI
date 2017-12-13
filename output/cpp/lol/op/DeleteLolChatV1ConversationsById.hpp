#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolChatV1ConversationsById(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-chat/v1/conversations/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
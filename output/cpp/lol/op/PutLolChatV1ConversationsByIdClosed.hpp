#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PutLolChatV1ConversationsByIdClosed(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-chat/v1/conversations/"+to_string(id)+"/closed?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
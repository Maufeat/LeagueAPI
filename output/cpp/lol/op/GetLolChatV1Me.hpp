#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatUserResource.hpp>
namespace lol {
  inline Result<LolChatUserResource> GetLolChatV1Me(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatUserResource> {
        _client_.request("get", "/lol-chat/v1/me?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatUserResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatSessionResource.hpp>
namespace lol {
  inline Result<LolChatSessionResource> GetLolChatV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatSessionResource> {
        _client_.request("get", "/lol-chat/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatSessionResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatChatServiceDynamicClientConfig.hpp"
namespace lol {
  inline Result<LolChatChatServiceDynamicClientConfig> GetLolChatV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatChatServiceDynamicClientConfig> {
        _client_.request("get", "/lol-chat/v1/config?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatChatServiceDynamicClientConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
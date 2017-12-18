#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatErrorResource.hpp>
namespace lol {
  inline Result<std::vector<LolChatErrorResource>> GetLolChatV1Errors(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChatErrorResource>> {
        _client_.request("get", "/lol-chat/v1/errors?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatErrorResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
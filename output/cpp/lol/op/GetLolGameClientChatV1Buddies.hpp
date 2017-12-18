#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<std::vector<std::string>> GetLolGameClientChatV1Buddies(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<std::string>> {
        _client_.request("get", "/lol-game-client-chat/v1/buddies?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<std::string>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
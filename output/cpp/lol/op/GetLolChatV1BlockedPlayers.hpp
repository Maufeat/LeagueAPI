#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatBlockedPlayerResource.hpp>
namespace lol {
  Result<std::vector<LolChatBlockedPlayerResource>> GetLolChatV1BlockedPlayers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChatBlockedPlayerResource>> {
        _client_.request("get", "/lol-chat/v1/blocked-players?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatBlockedPlayerResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
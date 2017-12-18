#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashPlayerChatRoster.hpp>
namespace lol {
  inline Result<std::vector<LolClashPlayerChatRoster>> GetLolClashV1PlayerChatRosters(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolClashPlayerChatRoster>> {
        _client_.request("get", "/lol-clash/v1/player/chat-rosters?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolClashPlayerChatRoster>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
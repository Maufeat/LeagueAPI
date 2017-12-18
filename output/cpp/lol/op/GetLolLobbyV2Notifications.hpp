#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyNotification.hpp>
namespace lol {
  inline Result<std::vector<LolLobbyLobbyNotification>> GetLolLobbyV2Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyNotification>> {
        _client_.request("get", "/lol-lobby/v2/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyNotification>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
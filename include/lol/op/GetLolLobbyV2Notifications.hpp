#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyNotification.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyNotification>> GetLolLobbyV2Notifications(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyNotification>>(_client.https.request("get", "/lol-lobby/v2/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyNotification>>(e.code());
    }
  }
  inline void GetLolLobbyV2Notifications(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLobbyLobbyNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyNotification>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyNotification>>(response));
        });
  }
}
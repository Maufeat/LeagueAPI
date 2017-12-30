#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyBotChampion.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLobbyLobbyBotChampion>> GetLolLobbyV2LobbyCustomAvailableBots(T& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyBotChampion>>(_client.https.request("get", "/lol-lobby/v2/lobby/custom/available-bots?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyBotChampion>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV2LobbyCustomAvailableBots(T& _client, std::function<void(T&, const Result<std::vector<LolLobbyLobbyBotChampion>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby/custom/available-bots?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyBotChampion>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyBotChampion>>(response));
        });
  }
}
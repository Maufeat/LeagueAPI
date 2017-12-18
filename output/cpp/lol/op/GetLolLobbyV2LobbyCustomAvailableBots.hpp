#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyBotChampion.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyBotChampion>> GetLolLobbyV2LobbyCustomAvailableBots(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLobbyLobbyBotChampion>> {
        _client.https.request("get", "/lol-lobby/v2/lobby/custom/available-bots?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyBotChampion>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV2LobbyCustomAvailableBots(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLobbyLobbyBotChampion>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby/custom/available-bots?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLobbyLobbyBotChampion>> { response });
          else
            cb(_client,Result<std::vector<LolLobbyLobbyBotChampion>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
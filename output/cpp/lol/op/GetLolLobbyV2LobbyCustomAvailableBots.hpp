#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyBotChampion.hpp>
namespace lol {
  inline Result<std::vector<LolLobbyLobbyBotChampion>> GetLolLobbyV2LobbyCustomAvailableBots(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyBotChampion>> {
        _client_.request("get", "/lol-lobby/v2/lobby/custom/available-bots?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyBotChampion>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
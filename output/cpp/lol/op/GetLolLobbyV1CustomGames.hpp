#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyLobbyCustomGame.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyCustomGame>> GetLolLobbyV1CustomGames(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyLobbyCustomGame>> {
        _client_.request("get", "/lol-lobby/v1/custom-games?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyCustomGame>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
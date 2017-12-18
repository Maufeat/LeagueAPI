#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyCustomGame.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyCustomGame>> GetLolLobbyV1CustomGames(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLobbyLobbyCustomGame>> {
        _client.https.request("get", "/lol-lobby/v1/custom-games?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyLobbyCustomGame>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1CustomGames(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLobbyLobbyCustomGame>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/custom-games?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLobbyLobbyCustomGame>> { response });
          else
            cb(_client,Result<std::vector<LolLobbyLobbyCustomGame>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
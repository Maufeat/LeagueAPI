#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyDto.hpp"
namespace lol {
  inline Result<LolLobbyLobbyDto> GetLolLobbyV2Lobby(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyLobbyDto> {
        _client.https.request("get", "/lol-lobby/v2/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyDto> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV2Lobby(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyLobbyDto>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobbyDto> { response });
          else
            cb(_client,Result<LolLobbyLobbyDto> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
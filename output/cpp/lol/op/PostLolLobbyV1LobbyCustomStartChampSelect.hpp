#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyCustomChampSelectStartResponse.hpp>
namespace lol {
  inline Result<LolLobbyLobbyCustomChampSelectStartResponse> PostLolLobbyV1LobbyCustomStartChampSelect(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyCustomChampSelectStartResponse> {
        _client_.request("post", "/lol-lobby/v1/lobby/custom/start-champ-select?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyCustomChampSelectStartResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
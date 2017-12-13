#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyPlayerDto.hpp>
namespace lol {
  Result<LolLobbyPlayerDto> GetLolLobbyV1PartiesPlayer(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyPlayerDto> {
        _client_.request("get", "/lol-lobby/v1/parties/player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyPlayerDto> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
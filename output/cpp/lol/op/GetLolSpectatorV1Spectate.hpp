#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SpectateGameInfo.hpp>
namespace lol {
  inline Result<SpectateGameInfo> GetLolSpectatorV1Spectate(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<SpectateGameInfo> {
        _client_.request("get", "/lol-spectator/v1/spectate?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SpectateGameInfo> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolMatchmakingMatchmakingReadyCheckResource.hpp"
namespace lol {
  inline Result<LolMatchmakingMatchmakingReadyCheckResource> GetLolMatchmakingV1ReadyCheck(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchmakingMatchmakingReadyCheckResource> {
        _client_.request("get", "/lol-matchmaking/v1/ready-check?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchmakingMatchmakingReadyCheckResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
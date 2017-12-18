#pragma once
#include "../base_op.hpp" 
#include "../def/LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace lol {
  inline Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> GetLolMatchmakingV1SearchErrors(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> {
        _client_.request("get", "/lol-matchmaking/v1/search/errors?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
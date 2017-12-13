#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingSearchResource.hpp>
namespace lol {
  Result<LolMatchmakingMatchmakingSearchResource> GetLolMatchmakingV1Search(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchmakingMatchmakingSearchResource> {
        _client_.request("get", "/lol-matchmaking/v1/search?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchmakingMatchmakingSearchResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
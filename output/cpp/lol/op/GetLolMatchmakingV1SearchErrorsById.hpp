#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingSearchErrorResource.hpp>
namespace lol {
  inline Result<LolMatchmakingMatchmakingSearchErrorResource> GetLolMatchmakingV1SearchErrorsById(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchmakingMatchmakingSearchErrorResource> {
        _client_.request("get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchmakingMatchmakingSearchErrorResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace lol {
  inline Result<LolMatchmakingMatchmakingSearchErrorResource> GetLolMatchmakingV1SearchErrorsById(LeagueClient& _client, const int32_t& id)
  {
    try {
      return Result<LolMatchmakingMatchmakingSearchErrorResource> {
        _client.https.request("get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchmakingMatchmakingSearchErrorResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMatchmakingV1SearchErrorsById(LeagueClient& _client, const int32_t& id, std::function<void(LeagueClient&,const Result<LolMatchmakingMatchmakingSearchErrorResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolMatchmakingMatchmakingSearchErrorResource> { response });
          else
            cb(_client,Result<LolMatchmakingMatchmakingSearchErrorResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
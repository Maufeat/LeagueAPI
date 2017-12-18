#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace lol {
  inline Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> GetLolMatchmakingV1SearchErrors(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> {
        _client.https.request("get", "/lol-matchmaking/v1/search/errors?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMatchmakingV1SearchErrors(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-matchmaking/v1/search/errors?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> { response });
          else
            cb(_client,Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
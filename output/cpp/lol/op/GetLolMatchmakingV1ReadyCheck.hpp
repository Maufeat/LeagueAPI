#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchmakingMatchmakingReadyCheckResource.hpp"
namespace lol {
  inline Result<LolMatchmakingMatchmakingReadyCheckResource> GetLolMatchmakingV1ReadyCheck(LeagueClient& _client)
  {
    try {
      return Result<LolMatchmakingMatchmakingReadyCheckResource> {
        _client.https.request("get", "/lol-matchmaking/v1/ready-check?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchmakingMatchmakingReadyCheckResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMatchmakingV1ReadyCheck(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolMatchmakingMatchmakingReadyCheckResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-matchmaking/v1/ready-check?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolMatchmakingMatchmakingReadyCheckResource> { response });
          else
            cb(_client,Result<LolMatchmakingMatchmakingReadyCheckResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowWatchPhase.hpp"
namespace lol {
  inline Result<LolGameflowGameflowWatchPhase> GetLolGameflowV1Watch(LeagueClient& _client)
  {
    try {
      return Result<LolGameflowGameflowWatchPhase> {
        _client.https.request("get", "/lol-gameflow/v1/watch?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowGameflowWatchPhase> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolGameflowV1Watch(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolGameflowGameflowWatchPhase>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/watch?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolGameflowGameflowWatchPhase> { response });
          else
            cb(_client,Result<LolGameflowGameflowWatchPhase> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
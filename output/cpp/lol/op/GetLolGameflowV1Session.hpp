#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowGameflowSession.hpp"
namespace lol {
  inline Result<LolGameflowGameflowSession> GetLolGameflowV1Session(LeagueClient& _client)
  {
    try {
      return Result<LolGameflowGameflowSession> {
        _client.https.request("get", "/lol-gameflow/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowGameflowSession> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolGameflowV1Session(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolGameflowGameflowSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolGameflowGameflowSession> { response });
          else
            cb(_client,Result<LolGameflowGameflowSession> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
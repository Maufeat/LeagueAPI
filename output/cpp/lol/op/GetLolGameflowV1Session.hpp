#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowGameflowSession.hpp>
namespace lol {
  Result<LolGameflowGameflowSession> GetLolGameflowV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameflowGameflowSession> {
        _client_.request("get", "/lol-gameflow/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowGameflowSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
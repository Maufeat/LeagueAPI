#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowGameflowWatchPhase.hpp>
namespace lol {
  inline Result<LolGameflowGameflowWatchPhase> GetLolGameflowV1Watch(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameflowGameflowWatchPhase> {
        _client_.request("get", "/lol-gameflow/v1/watch?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowGameflowWatchPhase> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolMatchmakingV1ReadyCheckAccept(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-matchmaking/v1/ready-check/accept?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
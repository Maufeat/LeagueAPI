#pragma once
#include "../base_op.hpp" 
#include "../def/LolLoginLoginSession.hpp"
namespace lol {
  inline Result<LolLoginLoginSession> GetLolLoginV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLoginLoginSession> {
        _client_.request("get", "/lol-login/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoginLoginSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
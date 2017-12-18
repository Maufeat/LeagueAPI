#pragma once
#include "../base_op.hpp" 
#include "../def/LolLoginLoginSession.hpp"
#include "../def/LolLoginUsernameAndPassword.hpp"
namespace lol {
  inline Result<LolLoginLoginSession> PostLolLoginV1Session(const LeagueClient& _client, const LolLoginUsernameAndPassword& UsernameAndPassword)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLoginLoginSession> {
        _client_.request("post", "/lol-login/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(UsernameAndPassword).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoginLoginSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginLoginSession.hpp"
#include "../def/LolLoginUsernameAndPassword.hpp"
namespace lol {
  inline Result<LolLoginLoginSession> PostLolLoginV1Session(LeagueClient& _client, const LolLoginUsernameAndPassword& UsernameAndPassword)
  {
    try {
      return Result<LolLoginLoginSession> {
        _client.https.request("post", "/lol-login/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(UsernameAndPassword).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoginLoginSession> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLoginV1Session(LeagueClient& _client, const LolLoginUsernameAndPassword& UsernameAndPassword, std::function<void(LeagueClient&,const Result<LolLoginLoginSession>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(UsernameAndPassword).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLoginLoginSession> { response });
          else
            cb(_client,Result<LolLoginLoginSession> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
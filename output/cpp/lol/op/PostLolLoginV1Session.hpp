#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginUsernameAndPassword.hpp>
#include <lol/def/LolLoginLoginSession.hpp>
namespace lol {
  Result<LolLoginLoginSession> PostLolLoginV1Session(const LeagueClient& _client, const LolLoginUsernameAndPassword& UsernameAndPassword)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/session?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(UsernameAndPassword).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
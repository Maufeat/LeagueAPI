#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginPlatformGeneratedCredentials.hpp>
namespace lol {
  Result<LolLoginPlatformGeneratedCredentials> GetLolLoginV1LoginPlatformCredentials(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-login/v1/login-platform-credentials?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
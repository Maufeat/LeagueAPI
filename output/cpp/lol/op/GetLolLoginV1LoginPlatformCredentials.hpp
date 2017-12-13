#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginPlatformGeneratedCredentials.hpp>
namespace lol {
  Result<LolLoginPlatformGeneratedCredentials> GetLolLoginV1LoginPlatformCredentials(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLoginPlatformGeneratedCredentials> {
        _client_.request("get", "/lol-login/v1/login-platform-credentials?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLoginPlatformGeneratedCredentials> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
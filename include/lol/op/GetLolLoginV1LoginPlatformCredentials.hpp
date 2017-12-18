#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginPlatformGeneratedCredentials.hpp"
namespace lol {
  inline Result<LolLoginPlatformGeneratedCredentials> GetLolLoginV1LoginPlatformCredentials(LeagueClient& _client)
  {
    try {
      return ToResult<LolLoginPlatformGeneratedCredentials>(_client.https.request("get", "/lol-login/v1/login-platform-credentials?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLoginPlatformGeneratedCredentials>(e.code());
    }
  }
  inline void GetLolLoginV1LoginPlatformCredentials(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLoginPlatformGeneratedCredentials>&)> cb)
  {
    _client.httpsa.request("get", "/lol-login/v1/login-platform-credentials?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLoginPlatformGeneratedCredentials>(e));
            else
              cb(_client, ToResult<LolLoginPlatformGeneratedCredentials>(response));
        });
  }
}
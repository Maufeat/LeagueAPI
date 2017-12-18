#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/cookie.hpp"
namespace lol {
  inline Result<std::vector<cookie>> GetCookieJarV1Cookies(LeagueClient& _client)
  {
    try {
      return Result<std::vector<cookie>> {
        _client.https.request("get", "/cookie-jar/v1/cookies?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<cookie>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetCookieJarV1Cookies(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<cookie>>&)> cb)
  {
    _client.httpsa.request("get", "/cookie-jar/v1/cookies?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<cookie>> { response });
          else
            cb(_client,Result<std::vector<cookie>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/cookie.hpp>
namespace lol {
  Result<std::vector<cookie>> GetCookieJarV1Cookies(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<cookie>> {
        _client_.request("get", "/cookie-jar/v1/cookies?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<cookie>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
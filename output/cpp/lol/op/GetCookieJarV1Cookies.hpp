#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/cookie.hpp>
namespace lol {
  Result<std::vector<cookie>> GetCookieJarV1Cookies(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/cookie-jar/v1/cookies?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/cookie.hpp>
namespace lol {
  Result<json> PostCookieJarV1Cookies(const LeagueClient& _client, const std::vector<cookie>& cookie)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/cookie-jar/v1/cookies?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(cookie).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
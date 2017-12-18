#pragma once
#include "../base_op.hpp" 
#include "../def/cookie.hpp"
namespace lol {
  inline Result<json> PostCookieJarV1Cookies(const LeagueClient& _client, const std::vector<cookie>& cookie)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/cookie-jar/v1/cookies?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(cookie).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
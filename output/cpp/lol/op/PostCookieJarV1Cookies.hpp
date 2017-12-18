#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/cookie.hpp"
namespace lol {
  inline Result<json> PostCookieJarV1Cookies(LeagueClient& _client, const std::vector<cookie>& cookie)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/cookie-jar/v1/cookies?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(cookie).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostCookieJarV1Cookies(LeagueClient& _client, const std::vector<cookie>& cookie, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/cookie-jar/v1/cookies?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(cookie).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
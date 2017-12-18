#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginAccessToken.hpp"
namespace lol {
  inline Result<json> PostLolLoginV1AccessToken(LeagueClient& _client, const LolLoginAccessToken& AccessToken)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/lol-login/v1/access-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(AccessToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLoginV1AccessToken(LeagueClient& _client, const LolLoginAccessToken& AccessToken, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/access-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(AccessToken).dump(),
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
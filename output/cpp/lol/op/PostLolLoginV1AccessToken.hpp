#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginAccessToken.hpp>
namespace lol {
  inline Result<json> PostLolLoginV1AccessToken(const LeagueClient& _client, const LolLoginAccessToken& AccessToken)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-login/v1/access-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(AccessToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
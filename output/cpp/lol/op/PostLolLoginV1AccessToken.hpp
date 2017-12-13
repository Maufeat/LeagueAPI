#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginAccessToken.hpp>
namespace lol {
  Result<json> PostLolLoginV1AccessToken(const LeagueClient& _client, const LolLoginAccessToken& AccessToken)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/access-token?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(AccessToken).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
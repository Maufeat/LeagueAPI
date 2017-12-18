#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoginAccessToken.hpp"
namespace lol {
  inline Result<json> PostLolLoginV1AccessToken(LeagueClient& _client, const LolLoginAccessToken& AccessToken)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-login/v1/access-token?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(AccessToken).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolLoginV1AccessToken(LeagueClient& _client, const LolLoginAccessToken& AccessToken, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/access-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(AccessToken).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
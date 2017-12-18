#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthRSOJWTConfig.hpp"
namespace lol {
  inline Result<std::nullptr_t> PutRsoAuthV1Config(LeagueClient& _client, const RsoAuthRSOJWTConfig& config)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("put", "/rso-auth/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(config).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PutRsoAuthV1Config(LeagueClient& _client, const RsoAuthRSOJWTConfig& config, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("put", "/rso-auth/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(config).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthRSOJWTConfig.hpp>
namespace lol {
  Result<void> PostRsoAuthV1Config(const LeagueClient& _client, const RsoAuthRSOJWTConfig& config)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/rso-auth/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(config).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
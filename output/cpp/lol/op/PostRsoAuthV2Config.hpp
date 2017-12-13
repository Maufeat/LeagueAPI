#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthPublicClientConfig.hpp>
namespace lol {
  Result<void> PostRsoAuthV2Config(const LeagueClient& _client, const RsoAuthPublicClientConfig& config)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/rso-auth/v2/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(config).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
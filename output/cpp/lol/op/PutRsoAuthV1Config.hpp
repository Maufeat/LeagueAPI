#pragma once
#include "../base_op.hpp" 
#include "../def/RsoAuthRSOJWTConfig.hpp"
namespace lol {
  inline Result<void> PutRsoAuthV1Config(const LeagueClient& _client, const RsoAuthRSOJWTConfig& config)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/rso-auth/v1/config?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(config).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
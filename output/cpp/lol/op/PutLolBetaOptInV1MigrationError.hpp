#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutLolBetaOptInV1MigrationError(const LeagueClient& _client, const std::string& errString)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-beta-opt-in/v1/migration-error?" + SimpleWeb::QueryString::create(Args2Headers({ { "errString", to_string(errString) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
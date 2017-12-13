#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolBetaOptInV1DoMigration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-beta-opt-in/v1/do-migration?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
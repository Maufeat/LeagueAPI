#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolBetaOptInV1NeedsMigration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-beta-opt-in/v1/needs-migration?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
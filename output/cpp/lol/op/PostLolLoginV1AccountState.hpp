#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolLoginV1AccountState(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/account-state?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
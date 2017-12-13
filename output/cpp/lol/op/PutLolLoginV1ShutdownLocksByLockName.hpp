#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutLolLoginV1ShutdownLocksByLockName(const LeagueClient& _client, const std::string& lockName)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
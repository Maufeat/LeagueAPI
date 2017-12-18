#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> DeleteLolLoginV1ShutdownLocksByLockName(const LeagueClient& _client, const std::string& lockName)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("delete", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
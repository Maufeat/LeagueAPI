#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> DeleteLolLoginV1ShutdownLocksByLockName(LeagueClient& _client, const std::string& lockName)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("delete", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void DeleteLolLoginV1ShutdownLocksByLockName(LeagueClient& _client, const std::string& lockName, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
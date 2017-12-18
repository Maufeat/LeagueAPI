#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<uint32_t> GetRiotclientUxCrashCount(LeagueClient& _client)
  {
    try {
      return Result<uint32_t> {
        _client.https.request("get", "/riotclient/ux-crash-count?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<uint32_t> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRiotclientUxCrashCount(LeagueClient& _client, std::function<void(LeagueClient&,const Result<uint32_t>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/ux-crash-count?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<uint32_t> { response });
          else
            cb(_client,Result<uint32_t> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
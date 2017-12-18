#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/BuildInfo.hpp"
namespace lol {
  inline Result<BuildInfo> GetSystemV1Builds(LeagueClient& _client)
  {
    try {
      return ToResult<BuildInfo>(_client.https.request("get", "/system/v1/builds?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<BuildInfo>(e.code());
    }
  }
  inline void GetSystemV1Builds(LeagueClient& _client, std::function<void(LeagueClient&, const Result<BuildInfo>&)> cb)
  {
    _client.httpsa.request("get", "/system/v1/builds?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<BuildInfo>(e));
            else
              cb(_client, ToResult<BuildInfo>(response));
        });
  }
}
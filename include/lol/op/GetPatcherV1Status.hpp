#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherStatus.hpp"
namespace lol {
  inline Result<PatcherStatus> GetPatcherV1Status(LeagueClient& _client)
  {
    try {
      return ToResult<PatcherStatus>(_client.https.request("get", "/patcher/v1/status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PatcherStatus>(e.code());
    }
  }
  inline void GetPatcherV1Status(LeagueClient& _client, std::function<void(LeagueClient&, const Result<PatcherStatus>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PatcherStatus>(e));
            else
              cb(_client, ToResult<PatcherStatus>(response));
        });
  }
}
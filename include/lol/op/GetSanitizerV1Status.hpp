#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerSanitizerStatus.hpp"
namespace lol {
  inline Result<SanitizerSanitizerStatus> GetSanitizerV1Status(LeagueClient& _client)
  {
    try {
      return ToResult<SanitizerSanitizerStatus>(_client.https.request("get", "/sanitizer/v1/status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<SanitizerSanitizerStatus>(e.code());
    }
  }
  inline void GetSanitizerV1Status(LeagueClient& _client, std::function<void(LeagueClient&, const Result<SanitizerSanitizerStatus>&)> cb)
  {
    _client.httpsa.request("get", "/sanitizer/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<SanitizerSanitizerStatus>(e));
            else
              cb(_client, ToResult<SanitizerSanitizerStatus>(response));
        });
  }
}
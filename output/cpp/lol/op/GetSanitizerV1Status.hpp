#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerSanitizerStatus.hpp"
namespace lol {
  inline Result<SanitizerSanitizerStatus> GetSanitizerV1Status(LeagueClient& _client)
  {
    try {
      return Result<SanitizerSanitizerStatus> {
        _client.https.request("get", "/sanitizer/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SanitizerSanitizerStatus> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetSanitizerV1Status(LeagueClient& _client, std::function<void(LeagueClient&,const Result<SanitizerSanitizerStatus>&)> cb)
  {
    _client.httpsa.request("get", "/sanitizer/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<SanitizerSanitizerStatus> { response });
          else
            cb(_client,Result<SanitizerSanitizerStatus> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderDebugConfig.hpp"
namespace lol {
  inline Result<RecofrienderDebugConfig> GetRecofrienderV1Debug(LeagueClient& _client)
  {
    try {
      return Result<RecofrienderDebugConfig> {
        _client.https.request("get", "/recofriender/v1/debug?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderDebugConfig> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV1Debug(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RecofrienderDebugConfig>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/debug?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RecofrienderDebugConfig> { response });
          else
            cb(_client,Result<RecofrienderDebugConfig> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
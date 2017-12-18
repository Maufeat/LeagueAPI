#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ProcessControlProcess.hpp"
namespace lol {
  inline Result<ProcessControlProcess> GetProcessControlV1Process(LeagueClient& _client)
  {
    try {
      return Result<ProcessControlProcess> {
        _client.https.request("get", "/process-control/v1/process?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ProcessControlProcess> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetProcessControlV1Process(LeagueClient& _client, std::function<void(LeagueClient&,const Result<ProcessControlProcess>&)> cb)
  {
    _client.httpsa.request("get", "/process-control/v1/process?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<ProcessControlProcess> { response });
          else
            cb(_client,Result<ProcessControlProcess> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/ProcessControlProcess.hpp"
namespace lol {
  inline Result<ProcessControlProcess> GetProcessControlV1Process(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<ProcessControlProcess> {
        _client_.request("get", "/process-control/v1/process?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ProcessControlProcess> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
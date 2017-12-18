#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostPerformanceV1ProcessByProcessId(const LeagueClient& _client, const uint32_t& processId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/performance/v1/process/"+to_string(processId)+"?" +
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
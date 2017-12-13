#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostPerformanceV1ProcessByProcessId(const LeagueClient& _client, const uint32_t& processId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/performance/v1/process/"+to_string(processId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
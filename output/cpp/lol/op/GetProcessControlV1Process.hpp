#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ProcessControlProcess.hpp>
namespace lol {
  Result<ProcessControlProcess> GetProcessControlV1Process(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/process-control/v1/process?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
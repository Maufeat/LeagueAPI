#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostProcessControlV1ProcessRestartToRepair(const LeagueClient& _client, const std::string& productId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/process-control/v1/process/restart-to-repair?" + SimpleWeb::QueryString::create(Args2Headers({ { "productId", to_string(productId) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
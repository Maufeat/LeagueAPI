#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostProcessControlV1ProcessRestartToRepair(const LeagueClient& _client, const std::string& productId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/process-control/v1/process/restart-to-repair?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "productId", to_string(productId) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
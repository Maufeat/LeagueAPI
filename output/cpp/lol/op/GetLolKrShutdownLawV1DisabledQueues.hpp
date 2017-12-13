#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<int32_t>> GetLolKrShutdownLawV1DisabledQueues(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<int32_t>> {
        _client_.request("get", "/lol-kr-shutdown-law/v1/disabled-queues?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<int32_t>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
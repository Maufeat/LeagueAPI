#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetPerformanceV1Memory(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/performance/v1/memory?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
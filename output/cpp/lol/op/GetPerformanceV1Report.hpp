#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetPerformanceV1Report(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/performance/v1/report?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
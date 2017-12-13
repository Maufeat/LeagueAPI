#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> MemoryStats(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/MemoryStats?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
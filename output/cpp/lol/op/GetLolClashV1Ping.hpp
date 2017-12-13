#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolClashV1Ping(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/ping?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> AsyncResult(const LeagueClient& _client, const uint32_t& asyncToken)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/AsyncResult?" + SimpleWeb::QueryString::create(Args2Headers({ { "asyncToken", to_string(asyncToken) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
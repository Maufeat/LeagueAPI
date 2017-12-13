#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolClashV1Refresh(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/refresh?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
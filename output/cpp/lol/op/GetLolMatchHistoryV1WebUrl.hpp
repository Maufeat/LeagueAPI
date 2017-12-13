#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolMatchHistoryV1WebUrl(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-match-history/v1/web-url?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
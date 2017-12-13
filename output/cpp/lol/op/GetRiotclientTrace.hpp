#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetRiotclientTrace(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riotclient/trace?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
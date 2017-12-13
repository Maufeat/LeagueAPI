#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetRiotclientAuthToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/riotclient/auth-token?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
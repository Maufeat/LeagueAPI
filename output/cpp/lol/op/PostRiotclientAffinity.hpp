#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientAffinity(const LeagueClient& _client, const std::string& newAffinity)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riotclient/affinity?" + SimpleWeb::QueryString::create(Args2Headers({ { "newAffinity", to_string(newAffinity) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
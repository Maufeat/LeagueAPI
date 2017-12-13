#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientShowSwagger(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riotclient/show-swagger?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
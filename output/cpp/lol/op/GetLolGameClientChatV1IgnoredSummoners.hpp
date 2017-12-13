#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<std::string>> GetLolGameClientChatV1IgnoredSummoners(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-client-chat/v1/ignored-summoners?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
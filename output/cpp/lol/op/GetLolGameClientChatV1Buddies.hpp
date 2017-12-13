#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::vector<std::string>> GetLolGameClientChatV1Buddies(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-client-chat/v1/buddies?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
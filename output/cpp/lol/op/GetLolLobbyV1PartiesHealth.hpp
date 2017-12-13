#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolLobbyV1PartiesHealth(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/parties/health?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
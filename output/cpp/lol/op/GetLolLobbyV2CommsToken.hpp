#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> GetLolLobbyV2CommsToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v2/comms/token?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
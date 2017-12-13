#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutLolLobbyV1PartiesReady(const LeagueClient& _client, const int32_t& ready)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-lobby/v1/parties/ready?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(ready).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
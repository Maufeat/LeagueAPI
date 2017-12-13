#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutLolLobbyV1PartiesActive(const LeagueClient& _client, const int32_t& active)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-lobby/v1/parties/active?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(active).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
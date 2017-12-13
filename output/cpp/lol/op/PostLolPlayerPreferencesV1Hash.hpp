#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PostLolPlayerPreferencesV1Hash(const LeagueClient& _client, const std::string& preferences)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-player-preferences/v1/hash?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(preferences).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
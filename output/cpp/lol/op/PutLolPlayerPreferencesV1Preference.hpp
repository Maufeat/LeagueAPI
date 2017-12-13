#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerPreferences.hpp>
namespace lol {
  Result<json> PutLolPlayerPreferencesV1Preference(const LeagueClient& _client, const PlayerPreferences& preferences)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-player-preferences/v1/preference?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(preferences).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
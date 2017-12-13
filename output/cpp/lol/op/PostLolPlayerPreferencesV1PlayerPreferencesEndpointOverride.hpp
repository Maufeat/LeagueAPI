#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerPreferencesEndpoint.hpp>
namespace lol {
  Result<json> PostLolPlayerPreferencesV1PlayerPreferencesEndpointOverride(const LeagueClient& _client, const PlayerPreferencesEndpoint& preferences)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-player-preferences/v1/player-preferences-endpoint-override?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(preferences).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
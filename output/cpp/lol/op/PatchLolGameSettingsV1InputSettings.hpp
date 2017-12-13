#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PatchLolGameSettingsV1InputSettings(const LeagueClient& _client, const json& settingsResource)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("patch", "/lol-game-settings/v1/input-settings?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(settingsResource).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
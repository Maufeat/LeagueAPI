#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> PatchLolGameSettingsV1GameSettings(const LeagueClient& _client, const json& settingsResource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("patch", "/lol-game-settings/v1/game-settings?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(settingsResource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
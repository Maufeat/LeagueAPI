#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerPreferencesEndpoint.hpp>
namespace lol {
  inline Result<json> PostLolPlayerPreferencesV1PlayerPreferencesEndpointOverride(const LeagueClient& _client, const PlayerPreferencesEndpoint& preferences)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-player-preferences/v1/player-preferences-endpoint-override?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
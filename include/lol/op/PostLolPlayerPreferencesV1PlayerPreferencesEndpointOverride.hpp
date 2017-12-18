#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerPreferencesEndpoint.hpp"
namespace lol {
  inline Result<json> PostLolPlayerPreferencesV1PlayerPreferencesEndpointOverride(LeagueClient& _client, const PlayerPreferencesEndpoint& preferences)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-player-preferences/v1/player-preferences-endpoint-override?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(preferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolPlayerPreferencesV1PlayerPreferencesEndpointOverride(LeagueClient& _client, const PlayerPreferencesEndpoint& preferences, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-player-preferences/v1/player-preferences-endpoint-override?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(preferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
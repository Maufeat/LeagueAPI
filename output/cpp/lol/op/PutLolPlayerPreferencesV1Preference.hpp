#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerPreferences.hpp>
namespace lol {
  Result<json> PutLolPlayerPreferencesV1Preference(const LeagueClient& _client, const PlayerPreferences& preferences)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-player-preferences/v1/preference?" +
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
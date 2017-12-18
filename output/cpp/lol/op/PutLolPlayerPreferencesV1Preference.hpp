#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerPreferences.hpp"
namespace lol {
  inline Result<json> PutLolPlayerPreferencesV1Preference(LeagueClient& _client, const PlayerPreferences& preferences)
  {
    try {
      return Result<json> {
        _client.https.request("put", "/lol-player-preferences/v1/preference?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolPlayerPreferencesV1Preference(LeagueClient& _client, const PlayerPreferences& preferences, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-player-preferences/v1/preference?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> PostLolPlayerPreferencesV1Hash(LeagueClient& _client, const std::string& preferences)
  {
    try {
      return Result<std::string> {
        _client.https.request("post", "/lol-player-preferences/v1/hash?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolPlayerPreferencesV1Hash(LeagueClient& _client, const std::string& preferences, std::function<void(LeagueClient&,const Result<std::string>&)> cb)
  {
    _client.httpsa.request("post", "/lol-player-preferences/v1/hash?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::string> { response });
          else
            cb(_client,Result<std::string> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
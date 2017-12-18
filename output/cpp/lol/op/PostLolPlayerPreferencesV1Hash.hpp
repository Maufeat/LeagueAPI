#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<std::string> PostLolPlayerPreferencesV1Hash(const LeagueClient& _client, const std::string& preferences)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("post", "/lol-player-preferences/v1/hash?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(preferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
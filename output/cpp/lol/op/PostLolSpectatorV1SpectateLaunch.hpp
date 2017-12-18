#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SpectateGameInfo.hpp>
namespace lol {
  inline Result<json> PostLolSpectatorV1SpectateLaunch(const LeagueClient& _client, const SpectateGameInfo& spectateGameInfo)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-spectator/v1/spectate/launch?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(spectateGameInfo).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
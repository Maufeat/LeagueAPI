#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SpectateGameInfo.hpp>
namespace lol {
  Result<json> PostLolSpectatorV1SpectateLaunch(const LeagueClient& _client, const SpectateGameInfo& spectateGameInfo)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-spectator/v1/spectate/launch?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(spectateGameInfo).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
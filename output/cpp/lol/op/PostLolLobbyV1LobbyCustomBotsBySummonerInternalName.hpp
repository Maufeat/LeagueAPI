#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyBotParams.hpp>
namespace lol {
  Result<json> PostLolLobbyV1LobbyCustomBotsBySummonerInternalName(const LeagueClient& _client, const std::string& summonerInternalName, const LolLobbyLobbyBotParams& parameters)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/lobby/custom/bots/"+to_string(summonerInternalName)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(parameters).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
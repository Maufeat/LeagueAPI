#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLobbyV1LobbyCustomBotsBySummonerInternalName(const LeagueClient& _client, const std::string& summonerInternalName)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-lobby/v1/lobby/custom/bots/"+to_string(summonerInternalName)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
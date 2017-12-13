#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLobbyTeamBuilderV1MatchmakingSearch(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-lobby-team-builder/v1/matchmaking/search?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
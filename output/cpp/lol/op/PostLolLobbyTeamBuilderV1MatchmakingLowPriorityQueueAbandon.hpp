#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon(const LeagueClient& _client, const std::string& leaverBusterToken)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(leaverBusterToken).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
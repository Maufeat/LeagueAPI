#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon(const LeagueClient& _client, const std::string& leaverBusterToken)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(leaverBusterToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
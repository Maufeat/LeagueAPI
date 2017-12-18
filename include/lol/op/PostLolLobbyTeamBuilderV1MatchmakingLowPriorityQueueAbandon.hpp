#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon(LeagueClient& _client, const std::string& leaverBusterToken)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(leaverBusterToken).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon(LeagueClient& _client, const std::string& leaverBusterToken, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(leaverBusterToken).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
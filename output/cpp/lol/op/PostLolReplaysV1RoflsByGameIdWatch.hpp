#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolReplaysReplayContextData.hpp>
namespace lol {
  Result<void> PostLolReplaysV1RoflsByGameIdWatch(const LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayContextData& contextData)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-replays/v1/rofls/"+to_string(gameId)+"/watch?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(contextData).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
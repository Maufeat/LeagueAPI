#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryTimelineFrames.hpp>
namespace lol {
  Result<LolMatchHistoryMatchHistoryTimelineFrames> GetLolMatchHistoryV1GameTimelinesByGameId(const LeagueClient& _client, const uint64_t& gameId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
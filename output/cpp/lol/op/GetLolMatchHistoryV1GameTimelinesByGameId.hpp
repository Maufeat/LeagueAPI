#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryTimelineFrames.hpp>
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryTimelineFrames> GetLolMatchHistoryV1GameTimelinesByGameId(const LeagueClient& _client, const uint64_t& gameId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchHistoryMatchHistoryTimelineFrames> {
        _client_.request("get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryTimelineFrames> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
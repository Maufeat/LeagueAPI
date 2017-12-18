#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryTimelineFrames.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryTimelineFrames> GetLolMatchHistoryV1GameTimelinesByGameId(LeagueClient& _client, const uint64_t& gameId)
  {
    try {
      return Result<LolMatchHistoryMatchHistoryTimelineFrames> {
        _client.https.request("get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryTimelineFrames> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMatchHistoryV1GameTimelinesByGameId(LeagueClient& _client, const uint64_t& gameId, std::function<void(LeagueClient&,const Result<LolMatchHistoryMatchHistoryTimelineFrames>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolMatchHistoryMatchHistoryTimelineFrames> { response });
          else
            cb(_client,Result<LolMatchHistoryMatchHistoryTimelineFrames> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
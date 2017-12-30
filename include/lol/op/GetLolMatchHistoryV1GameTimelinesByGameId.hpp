#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryTimelineFrames.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMatchHistoryMatchHistoryTimelineFrames> GetLolMatchHistoryV1GameTimelinesByGameId(T& _client, const uint64_t& gameId)
  {
    try {
      return ToResult<LolMatchHistoryMatchHistoryTimelineFrames>(_client.https.request("get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchHistoryMatchHistoryTimelineFrames>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMatchHistoryV1GameTimelinesByGameId(T& _client, const uint64_t& gameId, std::function<void(T&, const Result<LolMatchHistoryMatchHistoryTimelineFrames>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/game-timelines/"+to_string(gameId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchHistoryMatchHistoryTimelineFrames>(e));
            else
              cb(_client, ToResult<LolMatchHistoryMatchHistoryTimelineFrames>(response));
        });
  }
}
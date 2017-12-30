#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryGame.hpp"
namespace lol {
  template<typename T>
  inline Result<LolMatchHistoryMatchHistoryGame> GetLolMatchHistoryV1GamesByGameId(T& _client, const uint64_t& gameId)
  {
    try {
      return ToResult<LolMatchHistoryMatchHistoryGame>(_client.https.request("get", "/lol-match-history/v1/games/"+to_string(gameId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchHistoryMatchHistoryGame>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMatchHistoryV1GamesByGameId(T& _client, const uint64_t& gameId, std::function<void(T&, const Result<LolMatchHistoryMatchHistoryGame>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/games/"+to_string(gameId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchHistoryMatchHistoryGame>(e));
            else
              cb(_client, ToResult<LolMatchHistoryMatchHistoryGame>(response));
        });
  }
}
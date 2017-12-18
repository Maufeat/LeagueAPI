#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryGame.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryGame> GetLolMatchHistoryV1GamesByGameId(LeagueClient& _client, const uint64_t& gameId)
  {
    try {
      return Result<LolMatchHistoryMatchHistoryGame> {
        _client.https.request("get", "/lol-match-history/v1/games/"+to_string(gameId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryGame> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolMatchHistoryV1GamesByGameId(LeagueClient& _client, const uint64_t& gameId, std::function<void(LeagueClient&,const Result<LolMatchHistoryMatchHistoryGame>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/games/"+to_string(gameId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolMatchHistoryMatchHistoryGame> { response });
          else
            cb(_client,Result<LolMatchHistoryMatchHistoryGame> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
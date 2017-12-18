#pragma once
#include "../base_op.hpp" 
#include "../def/LolMatchHistoryMatchHistoryGame.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryGame> GetLolMatchHistoryV1GamesByGameId(const LeagueClient& _client, const uint64_t& gameId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolMatchHistoryMatchHistoryGame> {
        _client_.request("get", "/lol-match-history/v1/games/"+to_string(gameId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolMatchHistoryMatchHistoryGame> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
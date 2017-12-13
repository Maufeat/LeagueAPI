#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryGame.hpp>
namespace lol {
  Result<LolMatchHistoryMatchHistoryGame> GetLolMatchHistoryV1GamesByGameId(const LeagueClient& _client, const uint64_t& gameId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-match-history/v1/games/"+to_string(gameId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersSuggestedPlayer.hpp>
namespace lol {
  Result<std::vector<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer>> GetLolSuggestedPlayersV1SuggestedPlayers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-suggested-players/v1/suggested-players?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
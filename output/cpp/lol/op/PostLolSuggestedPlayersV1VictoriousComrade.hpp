#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersVictoriousComrade.hpp>
namespace lol {
  Result<void> PostLolSuggestedPlayersV1VictoriousComrade(const LeagueClient& _client, const LolSuggestedPlayersSuggestedPlayersVictoriousComrade& resource)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-suggested-players/v1/victorious-comrade?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(resource).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
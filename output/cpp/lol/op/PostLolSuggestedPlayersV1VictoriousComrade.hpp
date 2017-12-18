#pragma once
#include "../base_op.hpp" 
#include "../def/LolSuggestedPlayersSuggestedPlayersVictoriousComrade.hpp"
namespace lol {
  inline Result<void> PostLolSuggestedPlayersV1VictoriousComrade(const LeagueClient& _client, const LolSuggestedPlayersSuggestedPlayersVictoriousComrade& resource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-suggested-players/v1/victorious-comrade?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
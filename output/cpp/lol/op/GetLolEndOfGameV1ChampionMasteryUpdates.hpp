#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEndOfGameChampionMasteryUpdate.hpp>
namespace lol {
  Result<LolEndOfGameChampionMasteryUpdate> GetLolEndOfGameV1ChampionMasteryUpdates(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolEndOfGameChampionMasteryUpdate> {
        _client_.request("get", "/lol-end-of-game/v1/champion-mastery-updates?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEndOfGameChampionMasteryUpdate> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
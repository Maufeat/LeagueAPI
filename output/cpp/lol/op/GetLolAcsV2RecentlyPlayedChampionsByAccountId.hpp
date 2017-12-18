#pragma once
#include "../base_op.hpp" 
#include "../def/LolAcsAcsChampionGamesCollection.hpp"
namespace lol {
  inline Result<LolAcsAcsChampionGamesCollection> GetLolAcsV2RecentlyPlayedChampionsByAccountId(const LeagueClient& _client, const uint64_t& accountId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAcsAcsChampionGamesCollection> {
        _client_.request("get", "/lol-acs/v2/recently-played-champions/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAcsAcsChampionGamesCollection> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAcsAcsChampionGamesCollection.hpp>
namespace lol {
  inline Result<LolAcsAcsChampionGamesCollection> GetLolAcsV1RecentlyPlayedChampionsByAccountId(const LeagueClient& _client, const uint64_t& accountId, const bool& force)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAcsAcsChampionGamesCollection> {
        _client_.request("get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAcsAcsChampionGamesCollection> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
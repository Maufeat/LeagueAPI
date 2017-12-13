#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAcsAcsChampionGamesCollection.hpp>
namespace lol {
  Result<LolAcsAcsChampionGamesCollection> GetLolAcsV1RecentlyPlayedChampionsByAccountId(const LeagueClient& _client, const uint64_t& accountId, const bool& force)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?" + SimpleWeb::QueryString::create(Args2Headers({ { "force", to_string(force) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
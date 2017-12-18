#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampionsCollectionsChampion.hpp"
namespace lol {
  inline Result<LolChampionsCollectionsChampion> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionId(const LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampionsCollectionsChampion> {
        _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampionsCollectionsChampion> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
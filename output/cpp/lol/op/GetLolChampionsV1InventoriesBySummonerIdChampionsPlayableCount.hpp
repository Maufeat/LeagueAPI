#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampionsCollectionsChampionPlayableCounts.hpp>
namespace lol {
  Result<LolChampionsCollectionsChampionPlayableCounts> GetLolChampionsV1InventoriesBySummonerIdChampionsPlayableCount(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampionsCollectionsChampionPlayableCounts> {
        _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-playable-count?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampionsCollectionsChampionPlayableCounts> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
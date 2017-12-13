#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampionsCollectionsChampionChroma.hpp>
namespace lol {
  Result<std::vector<LolChampionsCollectionsChampionChroma>> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsBySkinIdChromas(const LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& skinId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChampionsCollectionsChampionChroma>> {
        _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(skinId)+"/chromas?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChampionsCollectionsChampionChroma>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
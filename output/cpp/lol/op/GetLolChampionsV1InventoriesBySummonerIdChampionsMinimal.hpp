#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampionsCollectionsChampionMinimal.hpp>
namespace lol {
  inline Result<std::vector<LolChampionsCollectionsChampionMinimal>> GetLolChampionsV1InventoriesBySummonerIdChampionsMinimal(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChampionsCollectionsChampionMinimal>> {
        _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-minimal?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChampionsCollectionsChampionMinimal>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
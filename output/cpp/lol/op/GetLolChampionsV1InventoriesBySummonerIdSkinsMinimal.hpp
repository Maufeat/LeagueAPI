#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampionsCollectionsChampionSkinMinimal.hpp>
namespace lol {
  Result<std::vector<LolChampionsCollectionsChampionSkinMinimal>> GetLolChampionsV1InventoriesBySummonerIdSkinsMinimal(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/skins-minimal?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
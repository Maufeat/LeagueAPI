#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionSkin.hpp"
namespace lol {
  inline Result<LolChampionsCollectionsChampionSkin> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId(LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& championSkinId)
  {
    try {
      return Result<LolChampionsCollectionsChampionSkin> {
        _client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(championSkinId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampionsCollectionsChampionSkin> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId(LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& championSkinId, std::function<void(LeagueClient&,const Result<LolChampionsCollectionsChampionSkin>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(championSkinId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampionsCollectionsChampionSkin> { response });
          else
            cb(_client,Result<LolChampionsCollectionsChampionSkin> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
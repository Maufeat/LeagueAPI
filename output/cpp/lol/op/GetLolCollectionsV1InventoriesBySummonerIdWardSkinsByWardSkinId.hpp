#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsWardSkin.hpp>
namespace lol {
  inline Result<LolCollectionsCollectionsWardSkin> GetLolCollectionsV1InventoriesBySummonerIdWardSkinsByWardSkinId(const LeagueClient& _client, const uint64_t& summonerId, const int64_t& wardSkinId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsWardSkin> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/ward-skins/"+to_string(wardSkinId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsWardSkin> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
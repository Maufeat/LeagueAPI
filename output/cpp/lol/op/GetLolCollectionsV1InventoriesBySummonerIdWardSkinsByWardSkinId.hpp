#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsWardSkin.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsWardSkin> GetLolCollectionsV1InventoriesBySummonerIdWardSkinsByWardSkinId(LeagueClient& _client, const uint64_t& summonerId, const int64_t& wardSkinId)
  {
    try {
      return Result<LolCollectionsCollectionsWardSkin> {
        _client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/ward-skins/"+to_string(wardSkinId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsWardSkin> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdWardSkinsByWardSkinId(LeagueClient& _client, const uint64_t& summonerId, const int64_t& wardSkinId, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsWardSkin>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/ward-skins/"+to_string(wardSkinId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsWardSkin> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsWardSkin> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolCollectionsCollectionsWardSkin.hpp"
namespace lol {
  inline Result<std::vector<LolCollectionsCollectionsWardSkin>> GetLolCollectionsV1InventoriesBySummonerIdWardSkins(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolCollectionsCollectionsWardSkin>> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/ward-skins?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolCollectionsCollectionsWardSkin>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
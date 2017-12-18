#pragma once
#include "../base_op.hpp" 
#include "../def/LolCollectionsCollectionsRuneQuantities.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsRuneQuantities> GetLolCollectionsV1InventoriesBySummonerIdRunes(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsRuneQuantities> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/runes?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsRuneQuantities> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
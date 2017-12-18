#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsSummonerSpells.hpp>
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerSpells> GetLolCollectionsV1InventoriesBySummonerIdSpells(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsSummonerSpells> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/spells?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsSummonerSpells> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsSummonerIcons.hpp>
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerIcons> GetLolCollectionsV1InventoriesBySummonerIdSummonerIcons(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsSummonerIcons> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/summoner-icons?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsSummonerIcons> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
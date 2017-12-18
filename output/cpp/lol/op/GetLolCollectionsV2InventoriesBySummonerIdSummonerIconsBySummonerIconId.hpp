#pragma once
#include "../base_op.hpp" 
#include "../def/LolCollectionsCollectionsSummonerIcon.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerIcon> GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId(const LeagueClient& _client, const uint64_t& summonerId, const int32_t& summonerIconId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsSummonerIcon> {
        _client_.request("get", "/lol-collections/v2/inventories/"+to_string(summonerId)+"/summoner-icons/"+to_string(summonerIconId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsSummonerIcon> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
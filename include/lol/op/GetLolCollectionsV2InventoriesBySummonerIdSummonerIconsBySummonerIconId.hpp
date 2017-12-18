#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsSummonerIcon.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerIcon> GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId(LeagueClient& _client, const uint64_t& summonerId, const int32_t& summonerIconId)
  {
    try {
      return ToResult<LolCollectionsCollectionsSummonerIcon>(_client.https.request("get", "/lol-collections/v2/inventories/"+to_string(summonerId)+"/summoner-icons/"+to_string(summonerIconId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsSummonerIcon>(e.code());
    }
  }
  inline void GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId(LeagueClient& _client, const uint64_t& summonerId, const int32_t& summonerIconId, std::function<void(LeagueClient&, const Result<LolCollectionsCollectionsSummonerIcon>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v2/inventories/"+to_string(summonerId)+"/summoner-icons/"+to_string(summonerIconId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsSummonerIcon>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsSummonerIcon>(response));
        });
  }
}
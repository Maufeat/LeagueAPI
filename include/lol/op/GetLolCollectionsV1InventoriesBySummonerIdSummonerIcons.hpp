#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsSummonerIcons.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerIcons> GetLolCollectionsV1InventoriesBySummonerIdSummonerIcons(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolCollectionsCollectionsSummonerIcons>(_client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/summoner-icons?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsSummonerIcons>(e.code());
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdSummonerIcons(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<LolCollectionsCollectionsSummonerIcons>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/summoner-icons?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsSummonerIcons>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsSummonerIcons>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsSummonerBackdrop.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerBackdrop> GetLolCollectionsV1InventoriesBySummonerIdBackdrop(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolCollectionsCollectionsSummonerBackdrop>(_client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/backdrop?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsSummonerBackdrop>(e.code());
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdBackdrop(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<LolCollectionsCollectionsSummonerBackdrop>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/backdrop?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsSummonerBackdrop>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsSummonerBackdrop>(response));
        });
  }
}
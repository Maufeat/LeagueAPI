#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampion.hpp"
namespace lol {
  inline Result<std::vector<LolChampionsCollectionsChampion>> GetLolChampionsV1InventoriesBySummonerIdChampions(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<std::vector<LolChampionsCollectionsChampion>>(_client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChampionsCollectionsChampion>>(e.code());
    }
  }
  inline void GetLolChampionsV1InventoriesBySummonerIdChampions(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<std::vector<LolChampionsCollectionsChampion>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampion>>(e));
            else
              cb(_client, ToResult<std::vector<LolChampionsCollectionsChampion>>(response));
        });
  }
}
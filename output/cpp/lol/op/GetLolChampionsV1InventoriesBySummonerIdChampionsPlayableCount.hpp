#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampionsCollectionsChampionPlayableCounts.hpp"
namespace lol {
  inline Result<LolChampionsCollectionsChampionPlayableCounts> GetLolChampionsV1InventoriesBySummonerIdChampionsPlayableCount(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolChampionsCollectionsChampionPlayableCounts> {
        _client.https.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-playable-count?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampionsCollectionsChampionPlayableCounts> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChampionsV1InventoriesBySummonerIdChampionsPlayableCount(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolChampionsCollectionsChampionPlayableCounts>&)> cb)
  {
    _client.httpsa.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-playable-count?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChampionsCollectionsChampionPlayableCounts> { response });
          else
            cb(_client,Result<LolChampionsCollectionsChampionPlayableCounts> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
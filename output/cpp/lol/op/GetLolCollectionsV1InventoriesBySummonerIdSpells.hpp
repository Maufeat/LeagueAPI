#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsSummonerSpells.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsSummonerSpells> GetLolCollectionsV1InventoriesBySummonerIdSpells(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolCollectionsCollectionsSummonerSpells> {
        _client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/spells?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsSummonerSpells> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdSpells(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsSummonerSpells>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/spells?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsSummonerSpells> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsSummonerSpells> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
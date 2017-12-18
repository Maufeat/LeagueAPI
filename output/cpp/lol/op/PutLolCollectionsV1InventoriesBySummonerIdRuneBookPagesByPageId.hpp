#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsRunePage.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsRunePage> PutLolCollectionsV1InventoriesBySummonerIdRuneBookPagesByPageId(LeagueClient& _client, const uint64_t& summonerId, const uint32_t& pageId, const LolCollectionsCollectionsRunePage& resource)
  {
    try {
      return Result<LolCollectionsCollectionsRunePage> {
        _client.https.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book/pages/"+to_string(pageId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsRunePage> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolCollectionsV1InventoriesBySummonerIdRuneBookPagesByPageId(LeagueClient& _client, const uint64_t& summonerId, const uint32_t& pageId, const LolCollectionsCollectionsRunePage& resource, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsRunePage>&)> cb)
  {
    _client.httpsa.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book/pages/"+to_string(pageId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsRunePage> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsRunePage> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsRunePage.hpp>
namespace lol {
  Result<LolCollectionsCollectionsRunePage> PutLolCollectionsV1InventoriesBySummonerIdRuneBookPagesByPageId(const LeagueClient& _client, const uint64_t& summonerId, const uint32_t& pageId, const LolCollectionsCollectionsRunePage& resource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsRunePage> {
        _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book/pages/"+to_string(pageId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsRunePage> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
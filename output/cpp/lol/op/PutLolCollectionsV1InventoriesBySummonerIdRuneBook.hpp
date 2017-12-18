#pragma once
#include "../base_op.hpp" 
#include "../def/LolCollectionsCollectionsRuneBook.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsRuneBook> PutLolCollectionsV1InventoriesBySummonerIdRuneBook(const LeagueClient& _client, const uint64_t& summonerId, const LolCollectionsCollectionsRuneBook& resource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsRuneBook> {
        _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsRuneBook> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
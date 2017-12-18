#pragma once
#include "../base_op.hpp" 
#include "../def/LolCollectionsCollectionsMasteryBook.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsMasteryBook> GetLolCollectionsV1InventoriesBySummonerIdMasteryBook(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsMasteryBook> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsMasteryBook> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
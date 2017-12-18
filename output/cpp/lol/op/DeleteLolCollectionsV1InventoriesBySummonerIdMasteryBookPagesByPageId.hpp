#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> DeleteLolCollectionsV1InventoriesBySummonerIdMasteryBookPagesByPageId(const LeagueClient& _client, const uint64_t& summonerId, const uint32_t& pageId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages/"+to_string(pageId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
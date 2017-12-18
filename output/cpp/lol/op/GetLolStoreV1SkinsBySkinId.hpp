#pragma once
#include "../base_op.hpp" 
#include "../def/LolStoreCatalogItem.hpp"
namespace lol {
  inline Result<LolStoreCatalogItem> GetLolStoreV1SkinsBySkinId(const LeagueClient& _client, const int32_t& skinId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolStoreCatalogItem> {
        _client_.request("get", "/lol-store/v1/skins/"+to_string(skinId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolStoreCatalogItem> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
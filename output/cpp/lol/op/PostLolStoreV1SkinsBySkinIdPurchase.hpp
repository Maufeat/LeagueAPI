#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolStoreItemCost.hpp>
namespace lol {
  inline Result<json> PostLolStoreV1SkinsBySkinIdPurchase(const LeagueClient& _client, const int32_t& skinId, const LolStoreItemCost& cost)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-store/v1/skins/"+to_string(skinId)+"/purchase?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(cost).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
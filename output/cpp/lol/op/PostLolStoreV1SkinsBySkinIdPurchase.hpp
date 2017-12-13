#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolStoreItemCost.hpp>
namespace lol {
  Result<json> PostLolStoreV1SkinsBySkinIdPurchase(const LeagueClient& _client, const int32_t& skinId, const LolStoreItemCost& cost)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-store/v1/skins/"+to_string(skinId)+"/purchase?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(cost).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
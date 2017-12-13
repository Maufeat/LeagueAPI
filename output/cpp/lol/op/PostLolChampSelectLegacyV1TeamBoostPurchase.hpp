#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolChampSelectLegacyV1TeamBoostPurchase(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-champ-select-legacy/v1/team-boost/purchase?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/EntitlementsToken.hpp>
namespace lol {
  Result<EntitlementsToken> GetEntitlementsV1Token(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/entitlements/v1/token?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolPersonalizedOffersV1Themed(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-personalized-offers/v1/themed?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashPlayerData.hpp>
namespace lol {
  Result<LolClashPlayerData> GetLolClashV1Player(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/player?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
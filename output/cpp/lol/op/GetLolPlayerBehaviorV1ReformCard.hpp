#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorReformCard.hpp>
namespace lol {
  Result<LolPlayerBehaviorReformCard> GetLolPlayerBehaviorV1ReformCard(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-behavior/v1/reform-card?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
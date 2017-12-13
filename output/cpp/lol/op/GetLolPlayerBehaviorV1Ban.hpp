#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorBanNotification.hpp>
namespace lol {
  Result<LolPlayerBehaviorBanNotification> GetLolPlayerBehaviorV1Ban(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-behavior/v1/ban?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
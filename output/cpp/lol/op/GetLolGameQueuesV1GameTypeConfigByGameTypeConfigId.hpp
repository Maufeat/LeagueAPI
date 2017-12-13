#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueueGameTypeConfig.hpp>
namespace lol {
  Result<LolGameQueuesQueueGameTypeConfig> GetLolGameQueuesV1GameTypeConfigByGameTypeConfigId(const LeagueClient& _client, const uint32_t& gameTypeConfigId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-queues/v1/game-type-config/"+to_string(gameTypeConfigId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
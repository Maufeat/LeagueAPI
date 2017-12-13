#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameQueuesQueueGameTypeConfig.hpp>
namespace lol {
  Result<LolGameQueuesQueueGameTypeConfig> GetLolGameQueuesV1GameTypeConfigByGameTypeConfigIdMapByMapId(const LeagueClient& _client, const uint32_t& gameTypeConfigId, const int32_t& mapId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-game-queues/v1/game-type-config/"+to_string(gameTypeConfigId)+"/map/"+to_string(mapId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
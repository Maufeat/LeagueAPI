#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowPlayerStatus.hpp>
namespace lol {
  Result<void> PostLolGameflowV1GameflowMetadataPlayerStatus(const LeagueClient& _client, const LolGameflowPlayerStatus& playerStatus)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-gameflow/v1/gameflow-metadata/player-status?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(playerStatus).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
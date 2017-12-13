#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowPlayerStatus.hpp>
namespace lol {
  Result<LolGameflowPlayerStatus> GetLolGameflowV1GameflowMetadataPlayerStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-gameflow/v1/gameflow-metadata/player-status?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
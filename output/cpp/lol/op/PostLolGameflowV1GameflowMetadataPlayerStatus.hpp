#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolGameflowPlayerStatus.hpp>
namespace lol {
  inline Result<void> PostLolGameflowV1GameflowMetadataPlayerStatus(const LeagueClient& _client, const LolGameflowPlayerStatus& playerStatus)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-gameflow/v1/gameflow-metadata/player-status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(playerStatus).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
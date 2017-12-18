#pragma once
#include "../base_op.hpp" 
#include "../def/LolGameflowPlayerStatus.hpp"
namespace lol {
  inline Result<LolGameflowPlayerStatus> GetLolGameflowV1GameflowMetadataPlayerStatus(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolGameflowPlayerStatus> {
        _client_.request("get", "/lol-gameflow/v1/gameflow-metadata/player-status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolGameflowPlayerStatus> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
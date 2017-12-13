#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolReplaysReplayContextData.hpp>
namespace lol {
  Result<void> PostLolReplaysV1RoflsByGameIdDownload(const LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayContextData& contextData)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-replays/v1/rofls/"+to_string(gameId)+"/download?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(contextData).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
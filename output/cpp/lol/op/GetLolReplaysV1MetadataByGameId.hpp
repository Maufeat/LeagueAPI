#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolReplaysReplayMetadata.hpp>
namespace lol {
  inline Result<LolReplaysReplayMetadata> GetLolReplaysV1MetadataByGameId(const LeagueClient& _client, const uint64_t& gameId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolReplaysReplayMetadata> {
        _client_.request("get", "/lol-replays/v1/metadata/"+to_string(gameId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolReplaysReplayMetadata> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
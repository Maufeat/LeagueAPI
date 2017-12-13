#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolReplaysReplayCreateMetadata.hpp>
namespace lol {
  Result<void> PostLolReplaysV2MetadataByGameIdCreate(const LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayCreateMetadata& request)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-replays/v2/metadata/"+to_string(gameId)+"/create?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(request).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolReplaysMetadataState.hpp>"

namespace leagueapi {
  struct LolReplaysReplayMetadata { /**/ 
    LolReplaysMetadataState state;/**/
    uint64_t gameId;/**/
    uint32_t downloadProgress;/**/
  };
  static void to_json(json& j, const LolReplaysReplayMetadata& v) { 
    j["state"] = v.state;
    j["gameId"] = v.gameId;
    j["downloadProgress"] = v.downloadProgress;
  }
  static void from_json(const json& j, LolReplaysReplayMetadata& v) { 
    v.state = j.at("state").get<LolReplaysMetadataState>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
#include "LolReplaysMetadataState.hpp"
namespace lol {
  struct LolReplaysReplayMetadata { 
    uint64_t gameId;
    uint32_t downloadProgress;
    LolReplaysMetadataState state; 
  };
  inline void to_json(json& j, const LolReplaysReplayMetadata& v) {
    j["gameId"] = v.gameId; 
    j["downloadProgress"] = v.downloadProgress; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolReplaysReplayMetadata& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>(); 
    v.state = j.at("state").get<LolReplaysMetadataState>(); 
  }
}
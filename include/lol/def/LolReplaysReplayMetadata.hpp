#pragma once
#include "../base_def.hpp" 
#include "LolReplaysMetadataState.hpp"
namespace lol {
  struct LolReplaysReplayMetadata { 
    LolReplaysMetadataState state;
    uint32_t downloadProgress;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolReplaysReplayMetadata& v) {
    j["state"] = v.state; 
    j["downloadProgress"] = v.downloadProgress; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolReplaysReplayMetadata& v) {
    v.state = j.at("state").get<LolReplaysMetadataState>(); 
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}
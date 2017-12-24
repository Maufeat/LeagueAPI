#pragma once
#include "../base_def.hpp" 
#include "LolReplaysMetadataState.hpp"
namespace lol {
  struct LolReplaysReplayMetadata { 
    LolReplaysMetadataState state;
    uint64_t gameId;
    uint32_t downloadProgress; 
  };
  inline void to_json(json& j, const LolReplaysReplayMetadata& v) {
    j["state"] = v.state; 
    j["gameId"] = v.gameId; 
    j["downloadProgress"] = v.downloadProgress; 
  }
  inline void from_json(const json& j, LolReplaysReplayMetadata& v) {
    v.state = j.at("state").get<LolReplaysMetadataState>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>(); 
  }
}
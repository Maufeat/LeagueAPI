#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysRoflFileMetadata { 
    std::string gameVersion;
    uint32_t gameLength;
    uint32_t lastGameChunkId;
    uint32_t lastKeyFrameId; 
  };
  inline void to_json(json& j, const LolReplaysRoflFileMetadata& v) {
    j["gameVersion"] = v.gameVersion; 
    j["gameLength"] = v.gameLength; 
    j["lastGameChunkId"] = v.lastGameChunkId; 
    j["lastKeyFrameId"] = v.lastKeyFrameId; 
  }
  inline void from_json(const json& j, LolReplaysRoflFileMetadata& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.gameLength = j.at("gameLength").get<uint32_t>(); 
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>(); 
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>(); 
  }
}
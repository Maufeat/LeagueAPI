#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysRoflFileMetadata { 
    uint32_t gameLength;
    std::string gameVersion;
    uint32_t lastGameChunkId;
    uint32_t lastKeyFrameId; 
  };
  inline void to_json(json& j, const LolReplaysRoflFileMetadata& v) {
    j["gameLength"] = v.gameLength; 
    j["gameVersion"] = v.gameVersion; 
    j["lastGameChunkId"] = v.lastGameChunkId; 
    j["lastKeyFrameId"] = v.lastKeyFrameId; 
  }
  inline void from_json(const json& j, LolReplaysRoflFileMetadata& v) {
    v.gameLength = j.at("gameLength").get<uint32_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>(); 
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>(); 
  }
}
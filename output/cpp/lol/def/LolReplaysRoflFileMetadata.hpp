#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysRoflFileMetadata { 
    uint32_t lastKeyFrameId;
    uint32_t lastGameChunkId;
    std::string gameVersion;
    uint32_t gameLength; 
  };
  void to_json(json& j, const LolReplaysRoflFileMetadata& v) {
    j["lastKeyFrameId"] = v.lastKeyFrameId; 
    j["lastGameChunkId"] = v.lastGameChunkId; 
    j["gameVersion"] = v.gameVersion; 
    j["gameLength"] = v.gameLength; 
  }
  void from_json(const json& j, LolReplaysRoflFileMetadata& v) {
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>(); 
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.gameLength = j.at("gameLength").get<uint32_t>(); 
  }
}
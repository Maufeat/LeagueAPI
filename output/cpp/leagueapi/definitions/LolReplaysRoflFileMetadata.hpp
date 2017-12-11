#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolReplaysRoflFileMetadata { /**/ 
    uint32_t lastKeyFrameId;/**/
    std::string gameVersion;/**/
    uint32_t lastGameChunkId;/**/
    uint32_t gameLength;/**/
  };
  static void to_json(json& j, const LolReplaysRoflFileMetadata& v) { 
    j["lastKeyFrameId"] = v.lastKeyFrameId;
    j["gameVersion"] = v.gameVersion;
    j["lastGameChunkId"] = v.lastGameChunkId;
    j["gameLength"] = v.gameLength;
  }
  static void from_json(const json& j, LolReplaysRoflFileMetadata& v) { 
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>(); 
    v.gameLength = j.at("gameLength").get<uint32_t>(); 
  }
} 
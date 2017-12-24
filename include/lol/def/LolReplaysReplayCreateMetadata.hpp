#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysReplayCreateMetadata { 
    uint64_t gameEnd;
    int32_t queueId;
    std::string gameType;
    std::string gameVersion; 
  };
  inline void to_json(json& j, const LolReplaysReplayCreateMetadata& v) {
    j["gameEnd"] = v.gameEnd; 
    j["queueId"] = v.queueId; 
    j["gameType"] = v.gameType; 
    j["gameVersion"] = v.gameVersion; 
  }
  inline void from_json(const json& j, LolReplaysReplayCreateMetadata& v) {
    v.gameEnd = j.at("gameEnd").get<uint64_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
  }
}
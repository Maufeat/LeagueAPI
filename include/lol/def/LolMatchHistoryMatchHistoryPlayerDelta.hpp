#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerGameDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerDelta { 
    uint64_t originalAccountId;
    std::string originalPlatformId;
    std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta> deltas; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerDelta& v) {
    j["originalAccountId"] = v.originalAccountId; 
    j["originalPlatformId"] = v.originalPlatformId; 
    j["deltas"] = v.deltas; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerDelta& v) {
    v.originalAccountId = j.at("originalAccountId").get<uint64_t>(); 
    v.originalPlatformId = j.at("originalPlatformId").get<std::string>(); 
    v.deltas = j.at("deltas").get<std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta>>(); 
  }
}
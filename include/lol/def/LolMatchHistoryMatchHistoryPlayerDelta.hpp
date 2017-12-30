#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerGameDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerDelta { 
    uint64_t originalAccountId;
    std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta> deltas;
    std::string originalPlatformId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerDelta& v) {
    j["originalAccountId"] = v.originalAccountId; 
    j["deltas"] = v.deltas; 
    j["originalPlatformId"] = v.originalPlatformId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerDelta& v) {
    v.originalAccountId = j.at("originalAccountId").get<uint64_t>(); 
    v.deltas = j.at("deltas").get<std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta>>(); 
    v.originalPlatformId = j.at("originalPlatformId").get<std::string>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPlayerGameDelta.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerDelta { 
    std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta> deltas;
    std::string originalPlatformId;
    uint64_t originalAccountId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerDelta& v) {
    j["deltas"] = v.deltas; 
    j["originalPlatformId"] = v.originalPlatformId; 
    j["originalAccountId"] = v.originalAccountId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerDelta& v) {
    v.deltas = j.at("deltas").get<std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta>>(); 
    v.originalPlatformId = j.at("originalPlatformId").get<std::string>(); 
    v.originalAccountId = j.at("originalAccountId").get<uint64_t>(); 
  }
}
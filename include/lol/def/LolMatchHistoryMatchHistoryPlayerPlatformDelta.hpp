#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta { 
    uint64_t xpDelta;
    uint64_t ipDelta;
    bool compensationModeEnabled;
    uint64_t timestamp; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    j["xpDelta"] = v.xpDelta; 
    j["ipDelta"] = v.ipDelta; 
    j["compensationModeEnabled"] = v.compensationModeEnabled; 
    j["timestamp"] = v.timestamp; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    v.xpDelta = j.at("xpDelta").get<uint64_t>(); 
    v.ipDelta = j.at("ipDelta").get<uint64_t>(); 
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
  }
}
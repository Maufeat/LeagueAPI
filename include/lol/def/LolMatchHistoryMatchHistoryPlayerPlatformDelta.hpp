#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta { 
    uint64_t ipDelta;
    uint64_t timestamp;
    bool compensationModeEnabled;
    uint64_t xpDelta; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    j["ipDelta"] = v.ipDelta; 
    j["timestamp"] = v.timestamp; 
    j["compensationModeEnabled"] = v.compensationModeEnabled; 
    j["xpDelta"] = v.xpDelta; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    v.ipDelta = j.at("ipDelta").get<uint64_t>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>(); 
    v.xpDelta = j.at("xpDelta").get<uint64_t>(); 
  }
}
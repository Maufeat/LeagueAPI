#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta { 
    uint64_t ipDelta;
    uint64_t xpDelta;
    uint64_t timestamp;
    bool compensationModeEnabled; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    j["ipDelta"] = v.ipDelta; 
    j["xpDelta"] = v.xpDelta; 
    j["timestamp"] = v.timestamp; 
    j["compensationModeEnabled"] = v.compensationModeEnabled; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
    v.ipDelta = j.at("ipDelta").get<uint64_t>(); 
    v.xpDelta = j.at("xpDelta").get<uint64_t>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>(); 
  }
}
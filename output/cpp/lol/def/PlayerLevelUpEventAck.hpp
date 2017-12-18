#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerLevelUpEventAck { 
    uint32_t newSummonerLevel;
    bool seenThisEvent; 
  };
  inline void to_json(json& j, const PlayerLevelUpEventAck& v) {
    j["newSummonerLevel"] = v.newSummonerLevel; 
    j["seenThisEvent"] = v.seenThisEvent; 
  }
  inline void from_json(const json& j, PlayerLevelUpEventAck& v) {
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
    v.seenThisEvent = j.at("seenThisEvent").get<bool>(); 
  }
}
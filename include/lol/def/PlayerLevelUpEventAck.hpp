#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerLevelUpEventAck { 
    bool seenThisEvent;
    uint32_t newSummonerLevel; 
  };
  inline void to_json(json& j, const PlayerLevelUpEventAck& v) {
    j["seenThisEvent"] = v.seenThisEvent; 
    j["newSummonerLevel"] = v.newSummonerLevel; 
  }
  inline void from_json(const json& j, PlayerLevelUpEventAck& v) {
    v.seenThisEvent = j.at("seenThisEvent").get<bool>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
  }
}
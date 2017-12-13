#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerLevelUpEventAck { 
    bool seenThisEvent;
    uint32_t newSummonerLevel; 
  };
  void to_json(json& j, const PlayerLevelUpEventAck& v) {
  j["seenThisEvent"] = v.seenThisEvent; 
  j["newSummonerLevel"] = v.newSummonerLevel; 
  }
  void from_json(const json& j, PlayerLevelUpEventAck& v) {
  v.seenThisEvent = j.at("seenThisEvent").get<bool>(); 
  v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
  }
}
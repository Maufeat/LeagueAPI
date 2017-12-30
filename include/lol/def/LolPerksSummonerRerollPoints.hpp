#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksSummonerRerollPoints { 
    uint64_t pointsToReroll;
    uint32_t numberOfRolls;
    uint64_t pointsCostToRoll;
    uint64_t currentPoints;
    uint32_t maxRolls; 
  };
  inline void to_json(json& j, const LolPerksSummonerRerollPoints& v) {
    j["pointsToReroll"] = v.pointsToReroll; 
    j["numberOfRolls"] = v.numberOfRolls; 
    j["pointsCostToRoll"] = v.pointsCostToRoll; 
    j["currentPoints"] = v.currentPoints; 
    j["maxRolls"] = v.maxRolls; 
  }
  inline void from_json(const json& j, LolPerksSummonerRerollPoints& v) {
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>(); 
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>(); 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>(); 
    v.currentPoints = j.at("currentPoints").get<uint64_t>(); 
    v.maxRolls = j.at("maxRolls").get<uint32_t>(); 
  }
}
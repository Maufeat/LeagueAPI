#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksSummonerRerollPoints { 
    uint32_t numberOfRolls;
    uint32_t maxRolls;
    uint64_t pointsToReroll;
    uint64_t pointsCostToRoll;
    uint64_t currentPoints; 
  };
  inline void to_json(json& j, const LolPerksSummonerRerollPoints& v) {
    j["numberOfRolls"] = v.numberOfRolls; 
    j["maxRolls"] = v.maxRolls; 
    j["pointsToReroll"] = v.pointsToReroll; 
    j["pointsCostToRoll"] = v.pointsCostToRoll; 
    j["currentPoints"] = v.currentPoints; 
  }
  inline void from_json(const json& j, LolPerksSummonerRerollPoints& v) {
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>(); 
    v.maxRolls = j.at("maxRolls").get<uint32_t>(); 
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>(); 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>(); 
    v.currentPoints = j.at("currentPoints").get<uint64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksSummonerRerollPoints { 
    uint32_t maxRolls;
    uint64_t currentPoints;
    uint64_t pointsCostToRoll;
    uint64_t pointsToReroll;
    uint32_t numberOfRolls; 
  };
  void to_json(json& j, const LolPerksSummonerRerollPoints& v) {
  j["maxRolls"] = v.maxRolls; 
  j["currentPoints"] = v.currentPoints; 
  j["pointsCostToRoll"] = v.pointsCostToRoll; 
  j["pointsToReroll"] = v.pointsToReroll; 
  j["numberOfRolls"] = v.numberOfRolls; 
  }
  void from_json(const json& j, LolPerksSummonerRerollPoints& v) {
  v.maxRolls = j.at("maxRolls").get<uint32_t>(); 
  v.currentPoints = j.at("currentPoints").get<uint64_t>(); 
  v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>(); 
  v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>(); 
  v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>(); 
  }
}
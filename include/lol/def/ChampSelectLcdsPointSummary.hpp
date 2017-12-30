#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPointSummary { 
    int32_t numberOfRolls;
    int32_t pointsToNextRoll;
    int32_t pointsCostToRoll;
    int32_t currentPoints;
    int32_t maxRolls; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPointSummary& v) {
    j["numberOfRolls"] = v.numberOfRolls; 
    j["pointsToNextRoll"] = v.pointsToNextRoll; 
    j["pointsCostToRoll"] = v.pointsCostToRoll; 
    j["currentPoints"] = v.currentPoints; 
    j["maxRolls"] = v.maxRolls; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPointSummary& v) {
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>(); 
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>(); 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>(); 
    v.currentPoints = j.at("currentPoints").get<int32_t>(); 
    v.maxRolls = j.at("maxRolls").get<int32_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPointSummary { 
    int32_t maxRolls;
    int32_t currentPoints;
    int32_t pointsCostToRoll;
    int32_t numberOfRolls;
    int32_t pointsToNextRoll; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPointSummary& v) {
    j["maxRolls"] = v.maxRolls; 
    j["currentPoints"] = v.currentPoints; 
    j["pointsCostToRoll"] = v.pointsCostToRoll; 
    j["numberOfRolls"] = v.numberOfRolls; 
    j["pointsToNextRoll"] = v.pointsToNextRoll; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPointSummary& v) {
    v.maxRolls = j.at("maxRolls").get<int32_t>(); 
    v.currentPoints = j.at("currentPoints").get<int32_t>(); 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>(); 
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>(); 
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>(); 
  }
}
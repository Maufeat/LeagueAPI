#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPointSummary { 
    int32_t pointsToNextRoll;
    int32_t currentPoints;
    int32_t numberOfRolls;
    int32_t maxRolls;
    int32_t pointsCostToRoll; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPointSummary& v) {
    j["pointsToNextRoll"] = v.pointsToNextRoll; 
    j["currentPoints"] = v.currentPoints; 
    j["numberOfRolls"] = v.numberOfRolls; 
    j["maxRolls"] = v.maxRolls; 
    j["pointsCostToRoll"] = v.pointsCostToRoll; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPointSummary& v) {
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>(); 
    v.currentPoints = j.at("currentPoints").get<int32_t>(); 
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>(); 
    v.maxRolls = j.at("maxRolls").get<int32_t>(); 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>(); 
  }
}
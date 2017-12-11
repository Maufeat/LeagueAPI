#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ChampSelectLcdsPointSummary { /**/ 
    int32_t pointsCostToRoll;/**/
    int32_t maxRolls;/**/
    int32_t numberOfRolls;/**/
    int32_t currentPoints;/**/
    int32_t pointsToNextRoll;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsPointSummary& v) { 
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["maxRolls"] = v.maxRolls;
    j["numberOfRolls"] = v.numberOfRolls;
    j["currentPoints"] = v.currentPoints;
    j["pointsToNextRoll"] = v.pointsToNextRoll;
  }
  static void from_json(const json& j, ChampSelectLcdsPointSummary& v) { 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>(); 
    v.maxRolls = j.at("maxRolls").get<int32_t>(); 
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>(); 
    v.currentPoints = j.at("currentPoints").get<int32_t>(); 
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>(); 
  }
} 
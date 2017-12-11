#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksSummonerRerollPoints { /**/ 
    uint64_t pointsCostToRoll;/**/
    uint32_t maxRolls;/**/
    uint32_t numberOfRolls;/**/
    uint64_t currentPoints;/**/
    uint64_t pointsToReroll;/**/
  };
  static void to_json(json& j, const LolPerksSummonerRerollPoints& v) { 
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["maxRolls"] = v.maxRolls;
    j["numberOfRolls"] = v.numberOfRolls;
    j["currentPoints"] = v.currentPoints;
    j["pointsToReroll"] = v.pointsToReroll;
  }
  static void from_json(const json& j, LolPerksSummonerRerollPoints& v) { 
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>(); 
    v.maxRolls = j.at("maxRolls").get<uint32_t>(); 
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>(); 
    v.currentPoints = j.at("currentPoints").get<uint64_t>(); 
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>(); 
  }
} 
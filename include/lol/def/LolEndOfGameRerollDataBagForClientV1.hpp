#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameRerollDataBagForClientV1 { 
    int64_t totalPoints;
    int64_t pointsGainedLastGame;
    int32_t rerollCount;
    int64_t pointsUntilNextReroll;
    int64_t pointCostOfReroll;
    uint32_t maximumRerolls; 
  };
  inline void to_json(json& j, const LolEndOfGameRerollDataBagForClientV1& v) {
    j["totalPoints"] = v.totalPoints; 
    j["pointsGainedLastGame"] = v.pointsGainedLastGame; 
    j["rerollCount"] = v.rerollCount; 
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll; 
    j["pointCostOfReroll"] = v.pointCostOfReroll; 
    j["maximumRerolls"] = v.maximumRerolls; 
  }
  inline void from_json(const json& j, LolEndOfGameRerollDataBagForClientV1& v) {
    v.totalPoints = j.at("totalPoints").get<int64_t>(); 
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>(); 
    v.rerollCount = j.at("rerollCount").get<int32_t>(); 
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>(); 
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>(); 
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>(); 
  }
}
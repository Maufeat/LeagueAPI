#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameRerollDataBagForClientV1 { 
    int64_t pointsGainedLastGame;
    int64_t pointsUntilNextReroll;
    int32_t rerollCount;
    int64_t totalPoints;
    uint32_t maximumRerolls;
    int64_t pointCostOfReroll; 
  };
  inline void to_json(json& j, const LolEndOfGameRerollDataBagForClientV1& v) {
    j["pointsGainedLastGame"] = v.pointsGainedLastGame; 
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll; 
    j["rerollCount"] = v.rerollCount; 
    j["totalPoints"] = v.totalPoints; 
    j["maximumRerolls"] = v.maximumRerolls; 
    j["pointCostOfReroll"] = v.pointCostOfReroll; 
  }
  inline void from_json(const json& j, LolEndOfGameRerollDataBagForClientV1& v) {
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>(); 
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>(); 
    v.rerollCount = j.at("rerollCount").get<int32_t>(); 
    v.totalPoints = j.at("totalPoints").get<int64_t>(); 
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>(); 
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameRerollDataBagForClientV1 { 
    uint32_t maximumRerolls;
    int64_t pointCostOfReroll;
    int64_t pointsGainedLastGame;
    int64_t pointsUntilNextReroll;
    int64_t totalPoints;
    int32_t rerollCount; 
  };
  void to_json(json& j, const LolEndOfGameRerollDataBagForClientV1& v) {
  j["maximumRerolls"] = v.maximumRerolls; 
  j["pointCostOfReroll"] = v.pointCostOfReroll; 
  j["pointsGainedLastGame"] = v.pointsGainedLastGame; 
  j["pointsUntilNextReroll"] = v.pointsUntilNextReroll; 
  j["totalPoints"] = v.totalPoints; 
  j["rerollCount"] = v.rerollCount; 
  }
  void from_json(const json& j, LolEndOfGameRerollDataBagForClientV1& v) {
  v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>(); 
  v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>(); 
  v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>(); 
  v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>(); 
  v.totalPoints = j.at("totalPoints").get<int64_t>(); 
  v.rerollCount = j.at("rerollCount").get<int32_t>(); 
  }
}
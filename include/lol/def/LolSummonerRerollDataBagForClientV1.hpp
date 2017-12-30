#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerRerollDataBagForClientV1 { 
    uint32_t maximumRerolls;
    int64_t pointsGainedLastGame;
    int64_t totalPoints;
    int64_t pointCostOfReroll;
    int64_t pointsUntilNextReroll;
    int32_t rerollCount;
    int64_t queueId; 
  };
  inline void to_json(json& j, const LolSummonerRerollDataBagForClientV1& v) {
    j["maximumRerolls"] = v.maximumRerolls; 
    j["pointsGainedLastGame"] = v.pointsGainedLastGame; 
    j["totalPoints"] = v.totalPoints; 
    j["pointCostOfReroll"] = v.pointCostOfReroll; 
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll; 
    j["rerollCount"] = v.rerollCount; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolSummonerRerollDataBagForClientV1& v) {
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>(); 
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>(); 
    v.totalPoints = j.at("totalPoints").get<int64_t>(); 
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>(); 
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>(); 
    v.rerollCount = j.at("rerollCount").get<int32_t>(); 
    v.queueId = j.at("queueId").get<int64_t>(); 
  }
}
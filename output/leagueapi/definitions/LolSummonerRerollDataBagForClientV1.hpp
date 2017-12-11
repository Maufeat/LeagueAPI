#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerRerollDataBagForClientV1 { /**/ 
    int64_t queueId;/**/
    uint32_t maximumRerolls;/**/
    int64_t pointsGainedLastGame;/**/
    int64_t pointsUntilNextReroll;/**/
    int64_t pointCostOfReroll;/**/
    int64_t totalPoints;/**/
    int32_t rerollCount;/**/
  };
  static void to_json(json& j, const LolSummonerRerollDataBagForClientV1& v) { 
    j["queueId"] = v.queueId;
    j["maximumRerolls"] = v.maximumRerolls;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
    j["totalPoints"] = v.totalPoints;
    j["rerollCount"] = v.rerollCount;
  }
  static void from_json(const json& j, LolSummonerRerollDataBagForClientV1& v) { 
    v.queueId = j.at("queueId").get<int64_t>(); 
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>(); 
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>(); 
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>(); 
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>(); 
    v.totalPoints = j.at("totalPoints").get<int64_t>(); 
    v.rerollCount = j.at("rerollCount").get<int32_t>(); 
  }
} 
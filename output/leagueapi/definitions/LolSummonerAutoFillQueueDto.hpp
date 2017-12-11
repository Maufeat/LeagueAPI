#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerAutoFillQueueDto { /**/ 
    int32_t queueId;/**/
    bool autoFillEligible;/**/
    bool autoFillProtectedForPromos;/**/
    bool autoFillProtectedForStreaking;/**/
  };
  static void to_json(json& j, const LolSummonerAutoFillQueueDto& v) { 
    j["queueId"] = v.queueId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }
  static void from_json(const json& j, LolSummonerAutoFillQueueDto& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  }
} 
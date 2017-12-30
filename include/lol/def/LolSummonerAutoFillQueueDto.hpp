#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerAutoFillQueueDto { 
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    int32_t queueId;
    bool autoFillProtectedForPromos; 
  };
  inline void to_json(json& j, const LolSummonerAutoFillQueueDto& v) {
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["queueId"] = v.queueId; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  }
  inline void from_json(const json& j, LolSummonerAutoFillQueueDto& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  }
}
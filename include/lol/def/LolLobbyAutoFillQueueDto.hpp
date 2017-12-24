#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyAutoFillQueueDto { 
    bool autoFillProtectedForPromos;
    int32_t queueId;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking; 
  };
  inline void to_json(json& j, const LolLobbyAutoFillQueueDto& v) {
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["queueId"] = v.queueId; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  }
  inline void from_json(const json& j, LolLobbyAutoFillQueueDto& v) {
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  }
}
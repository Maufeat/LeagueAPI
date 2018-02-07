#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibilityRestriction.hpp"
namespace lol {
  struct LolLobbyEligibility { 
    int32_t queueId;
    bool eligible;
    std::vector<LolLobbyEligibilityRestriction> restrictions; 
  };
  inline void to_json(json& j, const LolLobbyEligibility& v) {
    j["queueId"] = v.queueId; 
    j["eligible"] = v.eligible; 
    j["restrictions"] = v.restrictions; 
  }
  inline void from_json(const json& j, LolLobbyEligibility& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.eligible = j.at("eligible").get<bool>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
  }
}
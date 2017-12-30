#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibilityRestriction.hpp"
namespace lol {
  struct LolLobbyEligibility { 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    int32_t queueId;
    bool eligible; 
  };
  inline void to_json(json& j, const LolLobbyEligibility& v) {
    j["restrictions"] = v.restrictions; 
    j["queueId"] = v.queueId; 
    j["eligible"] = v.eligible; 
  }
  inline void from_json(const json& j, LolLobbyEligibility& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.eligible = j.at("eligible").get<bool>(); 
  }
}
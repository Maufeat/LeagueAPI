#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyEligibilityRestriction.hpp>
namespace lol {
  struct LolLobbyEligibility { 
    bool eligible;
    int32_t queueId;
    std::vector<LolLobbyEligibilityRestriction> restrictions; 
  };
  inline void to_json(json& j, const LolLobbyEligibility& v) {
    j["eligible"] = v.eligible; 
    j["queueId"] = v.queueId; 
    j["restrictions"] = v.restrictions; 
  }
  inline void from_json(const json& j, LolLobbyEligibility& v) {
    v.eligible = j.at("eligible").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>(); 
  }
}
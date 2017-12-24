#pragma once
#include "../base_def.hpp" 
#include "LolBannersClashV2FlagRewardSpec.hpp"
namespace lol {
  struct LolBannersCapClashFlagEntitlementPayload { 
    LolBannersClashV2FlagRewardSpec rewardSpec;
    std::string rewardType;
    std::string eventId; 
  };
  inline void to_json(json& j, const LolBannersCapClashFlagEntitlementPayload& v) {
    j["rewardSpec"] = v.rewardSpec; 
    j["rewardType"] = v.rewardType; 
    j["eventId"] = v.eventId; 
  }
  inline void from_json(const json& j, LolBannersCapClashFlagEntitlementPayload& v) {
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.eventId = j.at("eventId").get<std::string>(); 
  }
}
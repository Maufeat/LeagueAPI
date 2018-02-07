#pragma once
#include "../base_def.hpp" 
#include "LolBannersClashV2FlagRewardSpec.hpp"
namespace lol {
  struct LolBannersCapClashFlagEntitlementPayload { 
    std::string eventId;
    LolBannersClashV2FlagRewardSpec rewardSpec;
    std::string rewardType; 
  };
  inline void to_json(json& j, const LolBannersCapClashFlagEntitlementPayload& v) {
    j["eventId"] = v.eventId; 
    j["rewardSpec"] = v.rewardSpec; 
    j["rewardType"] = v.rewardType; 
  }
  inline void from_json(const json& j, LolBannersCapClashFlagEntitlementPayload& v) {
    v.eventId = j.at("eventId").get<std::string>(); 
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
  }
}
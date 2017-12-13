#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolBannersClashV2FlagRewardSpec.hpp>
namespace lol {
  struct LolBannersCapClashFlagEntitlementPayload { 
    std::string eventId;
    std::string rewardType;
    LolBannersClashV2FlagRewardSpec rewardSpec; 
  };
  void to_json(json& j, const LolBannersCapClashFlagEntitlementPayload& v) {
    j["eventId"] = v.eventId; 
    j["rewardType"] = v.rewardType; 
    j["rewardSpec"] = v.rewardSpec; 
  }
  void from_json(const json& j, LolBannersCapClashFlagEntitlementPayload& v) {
    v.eventId = j.at("eventId").get<std::string>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec>(); 
  }
}
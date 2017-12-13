#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolBannersClashV2FlagRewardSpec.hpp>
namespace lol {
  struct LolBannersCapClashFlagEntitlementPayload { 
    LolBannersClashV2FlagRewardSpec rewardSpec;
    std::string eventId;
    std::string rewardType; 
  };
  void to_json(json& j, const LolBannersCapClashFlagEntitlementPayload& v) {
  j["rewardSpec"] = v.rewardSpec; 
  j["eventId"] = v.eventId; 
  j["rewardType"] = v.rewardType; 
  }
  void from_json(const json& j, LolBannersCapClashFlagEntitlementPayload& v) {
  v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec>(); 
  v.eventId = j.at("eventId").get<std::string>(); 
  v.rewardType = j.at("rewardType").get<std::string>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "ClashRewardSpec.hpp"
#include "ClashRewardType.hpp"
namespace lol {
  struct ClashRewardDefinition { 
    ClashRewardType rewardType;
    ClashRewardSpec rewardSpec; 
  };
  inline void to_json(json& j, const ClashRewardDefinition& v) {
    j["rewardType"] = v.rewardType; 
    j["rewardSpec"] = v.rewardSpec; 
  }
  inline void from_json(const json& j, ClashRewardDefinition& v) {
    v.rewardType = j.at("rewardType").get<ClashRewardType>(); 
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
  }
}
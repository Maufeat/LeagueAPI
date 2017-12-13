#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardType.hpp>
#include <lol/def/ClashRewardSpec.hpp>
namespace lol {
  struct ClashRewardDefinition { 
    ClashRewardSpec rewardSpec;
    ClashRewardType rewardType; 
  };
  void to_json(json& j, const ClashRewardDefinition& v) {
  j["rewardSpec"] = v.rewardSpec; 
  j["rewardType"] = v.rewardType; 
  }
  void from_json(const json& j, ClashRewardDefinition& v) {
  v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
  v.rewardType = j.at("rewardType").get<ClashRewardType>(); 
  }
}
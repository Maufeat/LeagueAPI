#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ClashRewardType.hpp>"
#include "<leagueapi/definitions/ClashRewardSpec.hpp>"

namespace leagueapi {
  struct ClashRewardDefinition { /**/ 
    ClashRewardSpec rewardSpec;/**/
    ClashRewardType rewardType;/**/
  };
  static void to_json(json& j, const ClashRewardDefinition& v) { 
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
  }
  static void from_json(const json& j, ClashRewardDefinition& v) { 
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
    v.rewardType = j.at("rewardType").get<ClashRewardType>(); 
  }
} 
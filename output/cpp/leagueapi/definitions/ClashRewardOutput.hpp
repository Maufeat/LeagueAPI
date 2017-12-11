#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClashRewardTime.hpp>
#include <leagueapi/definitions/ClashRewardDefinition.hpp>

namespace leagueapi {
  struct ClashRewardOutput { /**/ 
    ClashRewardDefinition primary;/**/
    ClashRewardDefinition alternative;/**/
    ClashRewardTime show;/**/
    ClashRewardTime grant;/**/
  };
  static void to_json(json& j, const ClashRewardOutput& v) { 
    j["primary"] = v.primary;
    j["alternative"] = v.alternative;
    j["show"] = v.show;
    j["grant"] = v.grant;
  }
  static void from_json(const json& j, ClashRewardOutput& v) { 
    v.primary = j.at("primary").get<ClashRewardDefinition>(); 
    v.alternative = j.at("alternative").get<ClashRewardDefinition>(); 
    v.show = j.at("show").get<ClashRewardTime>(); 
    v.grant = j.at("grant").get<ClashRewardTime>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
#include "ClashRewardDefinition.hpp"
#include "ClashRewardTime.hpp"
namespace lol {
  struct ClashRewardOutput { 
    ClashRewardDefinition primary;
    ClashRewardDefinition alternative;
    ClashRewardTime grant;
    ClashRewardTime show; 
  };
  inline void to_json(json& j, const ClashRewardOutput& v) {
    j["primary"] = v.primary; 
    j["alternative"] = v.alternative; 
    j["grant"] = v.grant; 
    j["show"] = v.show; 
  }
  inline void from_json(const json& j, ClashRewardOutput& v) {
    v.primary = j.at("primary").get<ClashRewardDefinition>(); 
    v.alternative = j.at("alternative").get<ClashRewardDefinition>(); 
    v.grant = j.at("grant").get<ClashRewardTime>(); 
    v.show = j.at("show").get<ClashRewardTime>(); 
  }
}
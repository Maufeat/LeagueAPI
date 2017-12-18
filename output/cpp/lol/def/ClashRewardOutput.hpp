#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardDefinition.hpp>
#include <lol/def/ClashRewardTime.hpp>
namespace lol {
  struct ClashRewardOutput { 
    ClashRewardDefinition alternative;
    ClashRewardTime show;
    ClashRewardDefinition primary;
    ClashRewardTime grant; 
  };
  inline void to_json(json& j, const ClashRewardOutput& v) {
    j["alternative"] = v.alternative; 
    j["show"] = v.show; 
    j["primary"] = v.primary; 
    j["grant"] = v.grant; 
  }
  inline void from_json(const json& j, ClashRewardOutput& v) {
    v.alternative = j.at("alternative").get<ClashRewardDefinition>(); 
    v.show = j.at("show").get<ClashRewardTime>(); 
    v.primary = j.at("primary").get<ClashRewardDefinition>(); 
    v.grant = j.at("grant").get<ClashRewardTime>(); 
  }
}
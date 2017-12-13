#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardTime.hpp>
#include <lol/def/ClashRewardDefinition.hpp>
namespace lol {
  struct ClashRewardOutput { 
    ClashRewardDefinition primary;
    ClashRewardDefinition alternative;
    ClashRewardTime show;
    ClashRewardTime grant; 
  };
  void to_json(json& j, const ClashRewardOutput& v) {
  j["primary"] = v.primary; 
  j["alternative"] = v.alternative; 
  j["show"] = v.show; 
  j["grant"] = v.grant; 
  }
  void from_json(const json& j, ClashRewardOutput& v) {
  v.primary = j.at("primary").get<ClashRewardDefinition>(); 
  v.alternative = j.at("alternative").get<ClashRewardDefinition>(); 
  v.show = j.at("show").get<ClashRewardTime>(); 
  v.grant = j.at("grant").get<ClashRewardTime>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolFeaturedModesQueueGameCategory {  
    Custom_e = 1,
    None_e = 0,
    PvP_e = 2,
    VersusAi_e = 3,
  };
  void to_json(json& j, const LolFeaturedModesQueueGameCategory& v) {
  if(v == LolFeaturedModesQueueGameCategory::Custom_e) {
    j = "Custom";
    return;
  }
  if(v == LolFeaturedModesQueueGameCategory::None_e) {
    j = "None";
    return;
  }
  if(v == LolFeaturedModesQueueGameCategory::PvP_e) {
    j = "PvP";
    return;
  }
  if(v == LolFeaturedModesQueueGameCategory::VersusAi_e) {
    j = "VersusAi";
    return;
  }
  }
  void from_json(const json& j, LolFeaturedModesQueueGameCategory& v) {
  if(j.get<std::string>() == "Custom") {
    v = LolFeaturedModesQueueGameCategory::Custom_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolFeaturedModesQueueGameCategory::None_e;
    return;
  } 
  if(j.get<std::string>() == "PvP") {
    v = LolFeaturedModesQueueGameCategory::PvP_e;
    return;
  } 
  if(j.get<std::string>() == "VersusAi") {
    v = LolFeaturedModesQueueGameCategory::VersusAi_e;
    return;
  } 
  }
}
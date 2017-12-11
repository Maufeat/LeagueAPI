#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolFeaturedModesQueueGameCategory { /**/ 
    Custom_e = 1, /**/ 
    None_e = 0, /**/ 
    PvP_e = 2, /**/ 
    VersusAi_e = 3, /**/ 
  };
  static void to_json(json& j, const LolFeaturedModesQueueGameCategory& v) {
    switch(v) { 
    case LolFeaturedModesQueueGameCategory::Custom_e:
      j = "Custom";
    break;
    case LolFeaturedModesQueueGameCategory::None_e:
      j = "None";
    break;
    case LolFeaturedModesQueueGameCategory::PvP_e:
      j = "PvP";
    break;
    case LolFeaturedModesQueueGameCategory::VersusAi_e:
      j = "VersusAi";
    break;
    };
  }
  static void from_json(const json& j, LolFeaturedModesQueueGameCategory& v) {
    auto s = j.get<std::string>(); 
    if(s == "Custom") {
      v = LolFeaturedModesQueueGameCategory::Custom_e;
      return;
    } 
    if(s == "None") {
      v = LolFeaturedModesQueueGameCategory::None_e;
      return;
    } 
    if(s == "PvP") {
      v = LolFeaturedModesQueueGameCategory::PvP_e;
      return;
    } 
    if(s == "VersusAi") {
      v = LolFeaturedModesQueueGameCategory::VersusAi_e;
      return;
    } 
  }
} 
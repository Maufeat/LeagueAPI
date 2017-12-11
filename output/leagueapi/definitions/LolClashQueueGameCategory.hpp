#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashQueueGameCategory { /**/ 
    Custom_e = 1, /**/ 
    None_e = 0, /**/ 
    PvP_e = 2, /**/ 
    VersusAi_e = 3, /**/ 
  };
  static void to_json(json& j, const LolClashQueueGameCategory& v) {
    switch(v) { 
    case LolClashQueueGameCategory::Custom_e:
      j = "Custom";
    break;
    case LolClashQueueGameCategory::None_e:
      j = "None";
    break;
    case LolClashQueueGameCategory::PvP_e:
      j = "PvP";
    break;
    case LolClashQueueGameCategory::VersusAi_e:
      j = "VersusAi";
    break;
    };
  }
  static void from_json(const json& j, LolClashQueueGameCategory& v) {
    auto s = j.get<std::string>(); 
    if(s == "Custom") {
      v = LolClashQueueGameCategory::Custom_e;
      return;
    } 
    if(s == "None") {
      v = LolClashQueueGameCategory::None_e;
      return;
    } 
    if(s == "PvP") {
      v = LolClashQueueGameCategory::PvP_e;
      return;
    } 
    if(s == "VersusAi") {
      v = LolClashQueueGameCategory::VersusAi_e;
      return;
    } 
  }
} 
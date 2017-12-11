#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowQueueGameCategory { /**/ 
    Custom_e = 1, /**/ 
    None_e = 0, /**/ 
    PvP_e = 2, /**/ 
    VersusAi_e = 3, /**/ 
  };
  static void to_json(json& j, const LolGameflowQueueGameCategory& v) {
    switch(v) { 
    case LolGameflowQueueGameCategory::Custom_e:
      j = "Custom";
    break;
    case LolGameflowQueueGameCategory::None_e:
      j = "None";
    break;
    case LolGameflowQueueGameCategory::PvP_e:
      j = "PvP";
    break;
    case LolGameflowQueueGameCategory::VersusAi_e:
      j = "VersusAi";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowQueueGameCategory& v) {
    auto s = j.get<std::string>(); 
    if(s == "Custom") {
      v = LolGameflowQueueGameCategory::Custom_e;
      return;
    } 
    if(s == "None") {
      v = LolGameflowQueueGameCategory::None_e;
      return;
    } 
    if(s == "PvP") {
      v = LolGameflowQueueGameCategory::PvP_e;
      return;
    } 
    if(s == "VersusAi") {
      v = LolGameflowQueueGameCategory::VersusAi_e;
      return;
    } 
  }
} 
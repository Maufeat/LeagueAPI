#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameQueuesQueueGameCategory { /**/ 
    Custom_e = 1, /**/ 
    None_e = 0, /**/ 
    PvP_e = 2, /**/ 
    VersusAi_e = 3, /**/ 
  };
  static void to_json(json& j, const LolGameQueuesQueueGameCategory& v) {
    switch(v) { 
    case LolGameQueuesQueueGameCategory::Custom_e:
      j = "Custom";
    break;
    case LolGameQueuesQueueGameCategory::None_e:
      j = "None";
    break;
    case LolGameQueuesQueueGameCategory::PvP_e:
      j = "PvP";
    break;
    case LolGameQueuesQueueGameCategory::VersusAi_e:
      j = "VersusAi";
    break;
    };
  }
  static void from_json(const json& j, LolGameQueuesQueueGameCategory& v) {
    auto s = j.get<std::string>(); 
    if(s == "Custom") {
      v = LolGameQueuesQueueGameCategory::Custom_e;
      return;
    } 
    if(s == "None") {
      v = LolGameQueuesQueueGameCategory::None_e;
      return;
    } 
    if(s == "PvP") {
      v = LolGameQueuesQueueGameCategory::PvP_e;
      return;
    } 
    if(s == "VersusAi") {
      v = LolGameQueuesQueueGameCategory::VersusAi_e;
      return;
    } 
  }
} 
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameQueuesQueueGameCategory {  
    Custom_e = 1,
    None_e = 0,
    PvP_e = 2,
    VersusAi_e = 3,
  };
  void to_json(json& j, const LolGameQueuesQueueGameCategory& v) {
    if(v == LolGameQueuesQueueGameCategory::Custom_e) {
      j = "Custom";
      return;
    }
    if(v == LolGameQueuesQueueGameCategory::None_e) {
      j = "None";
      return;
    }
    if(v == LolGameQueuesQueueGameCategory::PvP_e) {
      j = "PvP";
      return;
    }
    if(v == LolGameQueuesQueueGameCategory::VersusAi_e) {
      j = "VersusAi";
      return;
    }
  }
  void from_json(const json& j, LolGameQueuesQueueGameCategory& v) {
    if(j.get<std::string>() == "Custom") {
      v = LolGameQueuesQueueGameCategory::Custom_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolGameQueuesQueueGameCategory::None_e;
      return;
    } 
    if(j.get<std::string>() == "PvP") {
      v = LolGameQueuesQueueGameCategory::PvP_e;
      return;
    } 
    if(j.get<std::string>() == "VersusAi") {
      v = LolGameQueuesQueueGameCategory::VersusAi_e;
      return;
    } 
  }
}
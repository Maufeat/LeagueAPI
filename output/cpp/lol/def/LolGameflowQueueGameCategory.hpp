#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowQueueGameCategory {  
    Custom_e = 1,
    None_e = 0,
    PvP_e = 2,
    VersusAi_e = 3,
  };
  inline void to_json(json& j, const LolGameflowQueueGameCategory& v) {
    if(v == LolGameflowQueueGameCategory::Custom_e) {
      j = "Custom";
      return;
    }
    if(v == LolGameflowQueueGameCategory::None_e) {
      j = "None";
      return;
    }
    if(v == LolGameflowQueueGameCategory::PvP_e) {
      j = "PvP";
      return;
    }
    if(v == LolGameflowQueueGameCategory::VersusAi_e) {
      j = "VersusAi";
      return;
    }
  }
  inline void from_json(const json& j, LolGameflowQueueGameCategory& v) {
    if(j.get<std::string>() == "Custom") {
      v = LolGameflowQueueGameCategory::Custom_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolGameflowQueueGameCategory::None_e;
      return;
    } 
    if(j.get<std::string>() == "PvP") {
      v = LolGameflowQueueGameCategory::PvP_e;
      return;
    } 
    if(j.get<std::string>() == "VersusAi") {
      v = LolGameflowQueueGameCategory::VersusAi_e;
      return;
    } 
  }
}
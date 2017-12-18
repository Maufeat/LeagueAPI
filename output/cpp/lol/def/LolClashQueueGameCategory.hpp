#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashQueueGameCategory {  
    Custom_e = 1,
    None_e = 0,
    PvP_e = 2,
    VersusAi_e = 3,
  };
  inline void to_json(json& j, const LolClashQueueGameCategory& v) {
    if(v == LolClashQueueGameCategory::Custom_e) {
      j = "Custom";
      return;
    }
    if(v == LolClashQueueGameCategory::None_e) {
      j = "None";
      return;
    }
    if(v == LolClashQueueGameCategory::PvP_e) {
      j = "PvP";
      return;
    }
    if(v == LolClashQueueGameCategory::VersusAi_e) {
      j = "VersusAi";
      return;
    }
  }
  inline void from_json(const json& j, LolClashQueueGameCategory& v) {
    if(j.get<std::string>() == "Custom") {
      v = LolClashQueueGameCategory::Custom_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolClashQueueGameCategory::None_e;
      return;
    } 
    if(j.get<std::string>() == "PvP") {
      v = LolClashQueueGameCategory::PvP_e;
      return;
    } 
    if(j.get<std::string>() == "VersusAi") {
      v = LolClashQueueGameCategory::VersusAi_e;
      return;
    } 
  }
}
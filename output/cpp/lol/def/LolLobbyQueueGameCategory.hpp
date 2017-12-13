#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyQueueGameCategory {  
    Custom_e = 1,
    None_e = 0,
    PvP_e = 2,
    VersusAi_e = 3,
  };
  void to_json(json& j, const LolLobbyQueueGameCategory& v) {
  if(v == LolLobbyQueueGameCategory::Custom_e) {
    j = "Custom";
    return;
  }
  if(v == LolLobbyQueueGameCategory::None_e) {
    j = "None";
    return;
  }
  if(v == LolLobbyQueueGameCategory::PvP_e) {
    j = "PvP";
    return;
  }
  if(v == LolLobbyQueueGameCategory::VersusAi_e) {
    j = "VersusAi";
    return;
  }
  }
  void from_json(const json& j, LolLobbyQueueGameCategory& v) {
  if(j.get<std::string>() == "Custom") {
    v = LolLobbyQueueGameCategory::Custom_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolLobbyQueueGameCategory::None_e;
    return;
  } 
  if(j.get<std::string>() == "PvP") {
    v = LolLobbyQueueGameCategory::PvP_e;
    return;
  } 
  if(j.get<std::string>() == "VersusAi") {
    v = LolLobbyQueueGameCategory::VersusAi_e;
    return;
  } 
  }
}
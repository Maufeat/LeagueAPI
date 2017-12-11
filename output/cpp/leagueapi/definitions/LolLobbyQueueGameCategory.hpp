#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyQueueGameCategory { /**/ 
    Custom_e = 1, /**/ 
    None_e = 0, /**/ 
    PvP_e = 2, /**/ 
    VersusAi_e = 3, /**/ 
  };
  static void to_json(json& j, const LolLobbyQueueGameCategory& v) {
    switch(v) { 
    case LolLobbyQueueGameCategory::Custom_e:
      j = "Custom";
    break;
    case LolLobbyQueueGameCategory::None_e:
      j = "None";
    break;
    case LolLobbyQueueGameCategory::PvP_e:
      j = "PvP";
    break;
    case LolLobbyQueueGameCategory::VersusAi_e:
      j = "VersusAi";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyQueueGameCategory& v) {
    auto s = j.get<std::string>(); 
    if(s == "Custom") {
      v = LolLobbyQueueGameCategory::Custom_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyQueueGameCategory::None_e;
      return;
    } 
    if(s == "PvP") {
      v = LolLobbyQueueGameCategory::PvP_e;
      return;
    } 
    if(s == "VersusAi") {
      v = LolLobbyQueueGameCategory::VersusAi_e;
      return;
    } 
  }
} 
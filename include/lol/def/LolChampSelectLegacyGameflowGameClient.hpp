#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyGameflowGameClient { 
    bool visible;
    bool running; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyGameflowGameClient& v) {
    j["visible"] = v.visible; 
    j["running"] = v.running; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyGameflowGameClient& v) {
    v.visible = j.at("visible").get<bool>(); 
    v.running = j.at("running").get<bool>(); 
  }
}
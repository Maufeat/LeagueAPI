#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsGameflowPhase.hpp"
namespace lol {
  struct LolEsportStreamNotificationsGameflowSession { 
    LolEsportStreamNotificationsGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsGameflowSession& v) {
    v.phase = j.at("phase").get<LolEsportStreamNotificationsGameflowPhase>(); 
  }
}
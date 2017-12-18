#pragma once
#include "../base_def.hpp" 
#include "LolMissionsGameflowPhase.hpp"
namespace lol {
  struct LolMissionsGameflowSession { 
    LolMissionsGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolMissionsGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolMissionsGameflowSession& v) {
    v.phase = j.at("phase").get<LolMissionsGameflowPhase>(); 
  }
}
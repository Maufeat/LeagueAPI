#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMissionsGameflowPhase.hpp>
namespace lol {
  struct LolMissionsGameflowSession { 
    LolMissionsGameflowPhase phase; 
  };
  void to_json(json& j, const LolMissionsGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolMissionsGameflowSession& v) {
    v.phase = j.at("phase").get<LolMissionsGameflowPhase>(); 
  }
}
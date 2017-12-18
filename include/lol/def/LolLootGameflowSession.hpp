#pragma once
#include "../base_def.hpp" 
#include "LolLootGameflowPhase.hpp"
namespace lol {
  struct LolLootGameflowSession { 
    LolLootGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolLootGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolLootGameflowSession& v) {
    v.phase = j.at("phase").get<LolLootGameflowPhase>(); 
  }
}
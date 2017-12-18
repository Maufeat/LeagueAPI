#pragma once
#include "../base_def.hpp" 
#include "LolFeaturedModesGameflowPhase.hpp"
namespace lol {
  struct LolFeaturedModesGameflowSession { 
    LolFeaturedModesGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolFeaturedModesGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolFeaturedModesGameflowSession& v) {
    v.phase = j.at("phase").get<LolFeaturedModesGameflowPhase>(); 
  }
}
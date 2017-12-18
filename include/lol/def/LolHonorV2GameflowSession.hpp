#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2GameflowPhase.hpp"
namespace lol {
  struct LolHonorV2GameflowSession { 
    LolHonorV2GameflowPhase phase; 
  };
  inline void to_json(json& j, const LolHonorV2GameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolHonorV2GameflowSession& v) {
    v.phase = j.at("phase").get<LolHonorV2GameflowPhase>(); 
  }
}
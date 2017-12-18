#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashGameflowPhase.hpp>
namespace lol {
  struct LolClashGameflowSession { 
    LolClashGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolClashGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolClashGameflowSession& v) {
    v.phase = j.at("phase").get<LolClashGameflowPhase>(); 
  }
}
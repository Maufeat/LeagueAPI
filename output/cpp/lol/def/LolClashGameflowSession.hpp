#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashGameflowPhase.hpp>
namespace lol {
  struct LolClashGameflowSession { 
    LolClashGameflowPhase phase; 
  };
  void to_json(json& j, const LolClashGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolClashGameflowSession& v) {
    v.phase = j.at("phase").get<LolClashGameflowPhase>(); 
  }
}
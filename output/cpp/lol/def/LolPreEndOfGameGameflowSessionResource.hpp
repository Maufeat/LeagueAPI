#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPreEndOfGameGameflowPhase.hpp>
namespace lol {
  struct LolPreEndOfGameGameflowSessionResource { 
    LolPreEndOfGameGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolPreEndOfGameGameflowSessionResource& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolPreEndOfGameGameflowSessionResource& v) {
    v.phase = j.at("phase").get<LolPreEndOfGameGameflowPhase>(); 
  }
}
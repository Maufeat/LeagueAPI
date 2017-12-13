#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPreEndOfGameGameflowPhase.hpp>
namespace lol {
  struct LolPreEndOfGameGameflowSessionResource { 
    LolPreEndOfGameGameflowPhase phase; 
  };
  void to_json(json& j, const LolPreEndOfGameGameflowSessionResource& v) {
  j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolPreEndOfGameGameflowSessionResource& v) {
  v.phase = j.at("phase").get<LolPreEndOfGameGameflowPhase>(); 
  }
}
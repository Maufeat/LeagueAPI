#pragma once
#include "../base_def.hpp" 
#include "LolKrShutdownLawShutdownLawStatus.hpp"
namespace lol {
  struct LolKrShutdownLawShutdownLawNotification { 
    LolKrShutdownLawShutdownLawStatus type; 
  };
  inline void to_json(json& j, const LolKrShutdownLawShutdownLawNotification& v) {
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolKrShutdownLawShutdownLawNotification& v) {
    v.type = j.at("type").get<LolKrShutdownLawShutdownLawStatus>(); 
  }
}
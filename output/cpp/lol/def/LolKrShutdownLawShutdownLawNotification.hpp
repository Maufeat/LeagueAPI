#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolKrShutdownLawShutdownLawStatus.hpp>
namespace lol {
  struct LolKrShutdownLawShutdownLawNotification { 
    LolKrShutdownLawShutdownLawStatus type; 
  };
  void to_json(json& j, const LolKrShutdownLawShutdownLawNotification& v) {
    j["type"] = v.type; 
  }
  void from_json(const json& j, LolKrShutdownLawShutdownLawNotification& v) {
    v.type = j.at("type").get<LolKrShutdownLawShutdownLawStatus>(); 
  }
}
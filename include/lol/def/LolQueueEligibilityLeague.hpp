#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolQueueEligibilityLeague { 
    std::string queueType;
    std::string leagueTier; 
  };
  inline void to_json(json& j, const LolQueueEligibilityLeague& v) {
    j["queueType"] = v.queueType; 
    j["leagueTier"] = v.leagueTier; 
  }
  inline void from_json(const json& j, LolQueueEligibilityLeague& v) {
    v.queueType = j.at("queueType").get<std::string>(); 
    v.leagueTier = j.at("leagueTier").get<std::string>(); 
  }
}
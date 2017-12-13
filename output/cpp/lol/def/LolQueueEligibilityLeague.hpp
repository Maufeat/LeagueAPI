#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilityLeague { 
    std::string leagueTier;
    std::string queueType; 
  };
  void to_json(json& j, const LolQueueEligibilityLeague& v) {
    j["leagueTier"] = v.leagueTier; 
    j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LolQueueEligibilityLeague& v) {
    v.leagueTier = j.at("leagueTier").get<std::string>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
  }
}
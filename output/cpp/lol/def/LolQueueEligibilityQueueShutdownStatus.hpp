#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilityQueueShutdownStatus { 
    bool isDisabled; 
  };
  inline void to_json(json& j, const LolQueueEligibilityQueueShutdownStatus& v) {
    j["isDisabled"] = v.isDisabled; 
  }
  inline void from_json(const json& j, LolQueueEligibilityQueueShutdownStatus& v) {
    v.isDisabled = j.at("isDisabled").get<bool>(); 
  }
}
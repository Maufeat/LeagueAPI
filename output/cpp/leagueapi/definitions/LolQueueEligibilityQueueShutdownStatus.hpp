#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolQueueEligibilityQueueShutdownStatus { /**/ 
    bool isDisabled;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityQueueShutdownStatus& v) { 
    j["isDisabled"] = v.isDisabled;
  }
  static void from_json(const json& j, LolQueueEligibilityQueueShutdownStatus& v) { 
    v.isDisabled = j.at("isDisabled").get<bool>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolKrShutdownLawAllQueueShutdownStatus { /**/ 
    bool isAllQueuesDisabled;/**/
  };
  static void to_json(json& j, const LolKrShutdownLawAllQueueShutdownStatus& v) { 
    j["isAllQueuesDisabled"] = v.isAllQueuesDisabled;
  }
  static void from_json(const json& j, LolKrShutdownLawAllQueueShutdownStatus& v) { 
    v.isAllQueuesDisabled = j.at("isAllQueuesDisabled").get<bool>(); 
  }
} 
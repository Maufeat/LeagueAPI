#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolKrShutdownLawQueueShutdownStatus { /**/ 
    bool isDisabled;/**/
  };
  static void to_json(json& j, const LolKrShutdownLawQueueShutdownStatus& v) { 
    j["isDisabled"] = v.isDisabled;
  }
  static void from_json(const json& j, LolKrShutdownLawQueueShutdownStatus& v) { 
    v.isDisabled = j.at("isDisabled").get<bool>(); 
  }
} 
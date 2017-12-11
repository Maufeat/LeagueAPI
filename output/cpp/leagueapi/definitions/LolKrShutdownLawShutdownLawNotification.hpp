#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolKrShutdownLawShutdownLawStatus.hpp>

namespace leagueapi {
  struct LolKrShutdownLawShutdownLawNotification { /**/ 
    LolKrShutdownLawShutdownLawStatus type;/**/
  };
  static void to_json(json& j, const LolKrShutdownLawShutdownLawNotification& v) { 
    j["type"] = v.type;
  }
  static void from_json(const json& j, LolKrShutdownLawShutdownLawNotification& v) { 
    v.type = j.at("type").get<LolKrShutdownLawShutdownLawStatus>(); 
  }
} 
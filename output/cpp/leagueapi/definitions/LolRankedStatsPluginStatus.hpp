#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolRankedStatsPluginStatus { /**/ 
    bool ready;/**/
  };
  static void to_json(json& j, const LolRankedStatsPluginStatus& v) { 
    j["ready"] = v.ready;
  }
  static void from_json(const json& j, LolRankedStatsPluginStatus& v) { 
    v.ready = j.at("ready").get<bool>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolReplaysReplaysDynamicConfig { /**/ 
    double MinutesUntilReplayConsideredLost;/**/
    std::string MinSupportedGameServerVersion;/**/
  };
  static void to_json(json& j, const LolReplaysReplaysDynamicConfig& v) { 
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost;
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion;
  }
  static void from_json(const json& j, LolReplaysReplaysDynamicConfig& v) { 
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>(); 
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>(); 
  }
} 
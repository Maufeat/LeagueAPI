#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysReplaysDynamicConfig { 
    std::string MinSupportedGameServerVersion;
    double MinutesUntilReplayConsideredLost; 
  };
  inline void to_json(json& j, const LolReplaysReplaysDynamicConfig& v) {
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion; 
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost; 
  }
  inline void from_json(const json& j, LolReplaysReplaysDynamicConfig& v) {
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>(); 
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>(); 
  }
}
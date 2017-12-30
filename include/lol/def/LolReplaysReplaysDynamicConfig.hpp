#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysReplaysDynamicConfig { 
    double MinutesUntilReplayConsideredLost;
    std::string MinSupportedGameServerVersion; 
  };
  inline void to_json(json& j, const LolReplaysReplaysDynamicConfig& v) {
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost; 
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion; 
  }
  inline void from_json(const json& j, LolReplaysReplaysDynamicConfig& v) {
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>(); 
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>(); 
  }
}
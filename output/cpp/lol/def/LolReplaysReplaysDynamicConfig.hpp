#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysReplaysDynamicConfig { 
    double MinutesUntilReplayConsideredLost;
    std::string MinSupportedGameServerVersion; 
  };
  void to_json(json& j, const LolReplaysReplaysDynamicConfig& v) {
  j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost; 
  j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion; 
  }
  void from_json(const json& j, LolReplaysReplaysDynamicConfig& v) {
  v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double>(); 
  v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string>(); 
  }
}
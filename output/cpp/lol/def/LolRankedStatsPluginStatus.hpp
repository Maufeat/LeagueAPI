#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolRankedStatsPluginStatus { 
    bool ready; 
  };
  inline void to_json(json& j, const LolRankedStatsPluginStatus& v) {
    j["ready"] = v.ready; 
  }
  inline void from_json(const json& j, LolRankedStatsPluginStatus& v) {
    v.ready = j.at("ready").get<bool>(); 
  }
}
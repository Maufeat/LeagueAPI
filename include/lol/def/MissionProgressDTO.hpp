#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MissionProgressDTO { 
    int32_t totalCount;
    int32_t lastViewedProgress;
    int32_t currentProgress; 
  };
  inline void to_json(json& j, const MissionProgressDTO& v) {
    j["totalCount"] = v.totalCount; 
    j["lastViewedProgress"] = v.lastViewedProgress; 
    j["currentProgress"] = v.currentProgress; 
  }
  inline void from_json(const json& j, MissionProgressDTO& v) {
    v.totalCount = j.at("totalCount").get<int32_t>(); 
    v.lastViewedProgress = j.at("lastViewedProgress").get<int32_t>(); 
    v.currentProgress = j.at("currentProgress").get<int32_t>(); 
  }
}
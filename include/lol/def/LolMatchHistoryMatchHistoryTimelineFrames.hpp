#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryTimelineFrame.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTimelineFrames { 
    std::vector<LolMatchHistoryMatchHistoryTimelineFrame> frames; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrames& v) {
    j["frames"] = v.frames; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrames& v) {
    v.frames = j.at("frames").get<std::vector<LolMatchHistoryMatchHistoryTimelineFrame>>(); 
  }
}
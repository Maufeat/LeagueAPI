#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryTimelineFrame.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryTimelineFrames { 
    std::vector<LolMatchHistoryMatchHistoryTimelineFrame> frames; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrames& v) {
    j["frames"] = v.frames; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrames& v) {
    v.frames = j.at("frames").get<std::vector<LolMatchHistoryMatchHistoryTimelineFrame>>(); 
  }
}
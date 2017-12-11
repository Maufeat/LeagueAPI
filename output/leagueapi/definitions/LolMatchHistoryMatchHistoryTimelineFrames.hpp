#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMatchHistoryMatchHistoryTimelineFrame.hpp>"

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrames { /**/ 
    std::vector<LolMatchHistoryMatchHistoryTimelineFrame> frames;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrames& v) { 
    j["frames"] = v.frames;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrames& v) { 
    v.frames = j.at("frames").get<std::vector<LolMatchHistoryMatchHistoryTimelineFrame>>(); 
  }
} 
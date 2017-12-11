#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MissionRewardMediaItemDTO { /**/ 
    std::string video;/**/
    std::string sound;/**/
  };
  static void to_json(json& j, const MissionRewardMediaItemDTO& v) { 
    j["video"] = v.video;
    j["sound"] = v.sound;
  }
  static void from_json(const json& j, MissionRewardMediaItemDTO& v) { 
    v.video = j.at("video").get<std::string>(); 
    v.sound = j.at("sound").get<std::string>(); 
  }
} 
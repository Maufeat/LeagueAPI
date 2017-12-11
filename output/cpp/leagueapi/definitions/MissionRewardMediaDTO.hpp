#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MissionRewardMediaItemDTO.hpp>

namespace leagueapi {
  struct MissionRewardMediaDTO { /**/ 
    MissionRewardMediaItemDTO loop;/**/
    MissionRewardMediaItemDTO outro;/**/
    MissionRewardMediaItemDTO intro;/**/
  };
  static void to_json(json& j, const MissionRewardMediaDTO& v) { 
    j["loop"] = v.loop;
    j["outro"] = v.outro;
    j["intro"] = v.intro;
  }
  static void from_json(const json& j, MissionRewardMediaDTO& v) { 
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO>(); 
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO>(); 
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO>(); 
  }
} 
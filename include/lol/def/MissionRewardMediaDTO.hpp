#pragma once
#include "../base_def.hpp" 
#include "MissionRewardMediaItemDTO.hpp"
namespace lol {
  struct MissionRewardMediaDTO { 
    MissionRewardMediaItemDTO outro;
    MissionRewardMediaItemDTO intro;
    MissionRewardMediaItemDTO loop; 
  };
  inline void to_json(json& j, const MissionRewardMediaDTO& v) {
    j["outro"] = v.outro; 
    j["intro"] = v.intro; 
    j["loop"] = v.loop; 
  }
  inline void from_json(const json& j, MissionRewardMediaDTO& v) {
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO>(); 
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO>(); 
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO>(); 
  }
}
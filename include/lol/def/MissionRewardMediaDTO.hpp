#pragma once
#include "../base_def.hpp" 
#include "MissionRewardMediaItemDTO.hpp"
namespace lol {
  struct MissionRewardMediaDTO { 
    MissionRewardMediaItemDTO intro;
    MissionRewardMediaItemDTO loop;
    MissionRewardMediaItemDTO outro; 
  };
  inline void to_json(json& j, const MissionRewardMediaDTO& v) {
    j["intro"] = v.intro; 
    j["loop"] = v.loop; 
    j["outro"] = v.outro; 
  }
  inline void from_json(const json& j, MissionRewardMediaDTO& v) {
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO>(); 
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO>(); 
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO>(); 
  }
}
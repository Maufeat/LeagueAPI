#pragma once
#include "../base_def.hpp" 
#include "MissionRewardMediaItemDTO.hpp"
namespace lol {
  struct MissionRewardMediaDTO { 
    MissionRewardMediaItemDTO loop;
    MissionRewardMediaItemDTO outro;
    MissionRewardMediaItemDTO intro; 
  };
  inline void to_json(json& j, const MissionRewardMediaDTO& v) {
    j["loop"] = v.loop; 
    j["outro"] = v.outro; 
    j["intro"] = v.intro; 
  }
  inline void from_json(const json& j, MissionRewardMediaDTO& v) {
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO>(); 
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO>(); 
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MissionRewardMediaItemDTO.hpp>
namespace lol {
  struct MissionRewardMediaDTO { 
    MissionRewardMediaItemDTO loop;
    MissionRewardMediaItemDTO outro;
    MissionRewardMediaItemDTO intro; 
  };
  void to_json(json& j, const MissionRewardMediaDTO& v) {
  j["loop"] = v.loop; 
  j["outro"] = v.outro; 
  j["intro"] = v.intro; 
  }
  void from_json(const json& j, MissionRewardMediaDTO& v) {
  v.loop = j.at("loop").get<MissionRewardMediaItemDTO>(); 
  v.outro = j.at("outro").get<MissionRewardMediaItemDTO>(); 
  v.intro = j.at("intro").get<MissionRewardMediaItemDTO>(); 
  }
}
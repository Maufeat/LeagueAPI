#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MissionRewardMediaItemDTO { 
    std::string sound;
    std::string video; 
  };
  inline void to_json(json& j, const MissionRewardMediaItemDTO& v) {
    j["sound"] = v.sound; 
    j["video"] = v.video; 
  }
  inline void from_json(const json& j, MissionRewardMediaItemDTO& v) {
    v.sound = j.at("sound").get<std::string>(); 
    v.video = j.at("video").get<std::string>(); 
  }
}
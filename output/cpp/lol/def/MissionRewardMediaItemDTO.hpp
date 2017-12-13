#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MissionRewardMediaItemDTO { 
    std::string video;
    std::string sound; 
  };
  void to_json(json& j, const MissionRewardMediaItemDTO& v) {
    j["video"] = v.video; 
    j["sound"] = v.sound; 
  }
  void from_json(const json& j, MissionRewardMediaItemDTO& v) {
    v.video = j.at("video").get<std::string>(); 
    v.sound = j.at("sound").get<std::string>(); 
  }
}
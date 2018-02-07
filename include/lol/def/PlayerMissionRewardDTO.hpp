#pragma once
#include "../base_def.hpp" 
#include "MissionRewardMediaDTO.hpp"
namespace lol {
  struct PlayerMissionRewardDTO { 
    std::string rewardType;
    std::string description;
    bool rewardFulfilled;
    MissionRewardMediaDTO media;
    std::string iconUrl;
    std::string itemId; 
  };
  inline void to_json(json& j, const PlayerMissionRewardDTO& v) {
    j["rewardType"] = v.rewardType; 
    j["description"] = v.description; 
    j["rewardFulfilled"] = v.rewardFulfilled; 
    j["media"] = v.media; 
    j["iconUrl"] = v.iconUrl; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, PlayerMissionRewardDTO& v) {
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>(); 
    v.media = j.at("media").get<MissionRewardMediaDTO>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
  }
}
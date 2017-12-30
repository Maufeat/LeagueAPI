#pragma once
#include "../base_def.hpp" 
#include "MissionRewardMediaDTO.hpp"
namespace lol {
  struct PlayerMissionRewardDTO { 
    bool rewardFulfilled;
    MissionRewardMediaDTO media;
    std::string description;
    std::string rewardType;
    std::string iconUrl;
    std::string itemId; 
  };
  inline void to_json(json& j, const PlayerMissionRewardDTO& v) {
    j["rewardFulfilled"] = v.rewardFulfilled; 
    j["media"] = v.media; 
    j["description"] = v.description; 
    j["rewardType"] = v.rewardType; 
    j["iconUrl"] = v.iconUrl; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, PlayerMissionRewardDTO& v) {
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>(); 
    v.media = j.at("media").get<MissionRewardMediaDTO>(); 
    v.description = j.at("description").get<std::string>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
  }
}
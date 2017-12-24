#pragma once
#include "../base_def.hpp" 
#include "MissionRewardMediaDTO.hpp"
namespace lol {
  struct PlayerMissionRewardDTO { 
    std::string rewardType;
    MissionRewardMediaDTO media;
    std::string itemId;
    std::string description;
    bool rewardFulfilled;
    std::string iconUrl; 
  };
  inline void to_json(json& j, const PlayerMissionRewardDTO& v) {
    j["rewardType"] = v.rewardType; 
    j["media"] = v.media; 
    j["itemId"] = v.itemId; 
    j["description"] = v.description; 
    j["rewardFulfilled"] = v.rewardFulfilled; 
    j["iconUrl"] = v.iconUrl; 
  }
  inline void from_json(const json& j, PlayerMissionRewardDTO& v) {
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.media = j.at("media").get<MissionRewardMediaDTO>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
  }
}
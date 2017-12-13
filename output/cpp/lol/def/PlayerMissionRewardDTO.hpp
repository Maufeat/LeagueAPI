#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MissionRewardMediaDTO.hpp>
namespace lol {
  struct PlayerMissionRewardDTO { 
    bool rewardFulfilled;
    MissionRewardMediaDTO media;
    std::string iconUrl;
    std::string rewardType;
    std::string description;
    std::string itemId; 
  };
  void to_json(json& j, const PlayerMissionRewardDTO& v) {
  j["rewardFulfilled"] = v.rewardFulfilled; 
  j["media"] = v.media; 
  j["iconUrl"] = v.iconUrl; 
  j["rewardType"] = v.rewardType; 
  j["description"] = v.description; 
  j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, PlayerMissionRewardDTO& v) {
  v.rewardFulfilled = j.at("rewardFulfilled").get<bool>(); 
  v.media = j.at("media").get<MissionRewardMediaDTO>(); 
  v.iconUrl = j.at("iconUrl").get<std::string>(); 
  v.rewardType = j.at("rewardType").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.itemId = j.at("itemId").get<std::string>(); 
  }
}
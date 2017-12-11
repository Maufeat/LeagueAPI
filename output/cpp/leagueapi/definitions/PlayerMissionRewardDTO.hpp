#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MissionRewardMediaDTO.hpp>

namespace leagueapi {
  struct PlayerMissionRewardDTO { /**/ 
    std::string rewardType;/**/
    std::string iconUrl;/**/
    MissionRewardMediaDTO media;/**/
    bool rewardFulfilled;/**/
    std::string description;/**/
    std::string itemId;/**/
  };
  static void to_json(json& j, const PlayerMissionRewardDTO& v) { 
    j["rewardType"] = v.rewardType;
    j["iconUrl"] = v.iconUrl;
    j["media"] = v.media;
    j["rewardFulfilled"] = v.rewardFulfilled;
    j["description"] = v.description;
    j["itemId"] = v.itemId;
  }
  static void from_json(const json& j, PlayerMissionRewardDTO& v) { 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.media = j.at("media").get<MissionRewardMediaDTO>(); 
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>(); 
    v.description = j.at("description").get<std::string>(); 
    v.itemId = j.at("itemId").get<std::string>(); 
  }
} 
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerInventory.hpp>
namespace lol {
  struct PlayerMissionEligibilityData { 
    int32_t level;
    PlayerInventory playerInventory; 
  };
  inline void to_json(json& j, const PlayerMissionEligibilityData& v) {
    j["level"] = v.level; 
    j["playerInventory"] = v.playerInventory; 
  }
  inline void from_json(const json& j, PlayerMissionEligibilityData& v) {
    v.level = j.at("level").get<int32_t>(); 
    v.playerInventory = j.at("playerInventory").get<PlayerInventory>(); 
  }
}
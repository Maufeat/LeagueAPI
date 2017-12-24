#pragma once
#include "../base_def.hpp" 
#include "PlayerInventory.hpp"
namespace lol {
  struct PlayerMissionEligibilityData { 
    PlayerInventory playerInventory;
    int32_t level; 
  };
  inline void to_json(json& j, const PlayerMissionEligibilityData& v) {
    j["playerInventory"] = v.playerInventory; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, PlayerMissionEligibilityData& v) {
    v.playerInventory = j.at("playerInventory").get<PlayerInventory>(); 
    v.level = j.at("level").get<int32_t>(); 
  }
}
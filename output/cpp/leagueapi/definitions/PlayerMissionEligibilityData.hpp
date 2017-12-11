#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PlayerInventory.hpp>

namespace leagueapi {
  struct PlayerMissionEligibilityData { /**/ 
    int32_t level;/**/
    PlayerInventory playerInventory;/**/
  };
  static void to_json(json& j, const PlayerMissionEligibilityData& v) { 
    j["level"] = v.level;
    j["playerInventory"] = v.playerInventory;
  }
  static void from_json(const json& j, PlayerMissionEligibilityData& v) { 
    v.level = j.at("level").get<int32_t>(); 
    v.playerInventory = j.at("playerInventory").get<PlayerInventory>(); 
  }
} 
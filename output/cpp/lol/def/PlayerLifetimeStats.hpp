#pragma once
#include "../base_def.hpp" 
#include "PlayerStatSummaries.hpp"
namespace lol {
  struct PlayerLifetimeStats { 
    PlayerStatSummaries playerStatSummaries; 
  };
  inline void to_json(json& j, const PlayerLifetimeStats& v) {
    j["playerStatSummaries"] = v.playerStatSummaries; 
  }
  inline void from_json(const json& j, PlayerLifetimeStats& v) {
    v.playerStatSummaries = j.at("playerStatSummaries").get<PlayerStatSummaries>(); 
  }
}
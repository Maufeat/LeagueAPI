#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerStatSummaries.hpp>
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
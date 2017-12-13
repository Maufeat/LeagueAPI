#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerStatSummaries.hpp>
namespace lol {
  struct PlayerLifetimeStats { 
    PlayerStatSummaries playerStatSummaries; 
  };
  void to_json(json& j, const PlayerLifetimeStats& v) {
    j["playerStatSummaries"] = v.playerStatSummaries; 
  }
  void from_json(const json& j, PlayerLifetimeStats& v) {
    v.playerStatSummaries = j.at("playerStatSummaries").get<PlayerStatSummaries>(); 
  }
}
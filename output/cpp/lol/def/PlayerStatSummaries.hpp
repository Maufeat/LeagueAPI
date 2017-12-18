#pragma once
#include "../base_def.hpp" 
#include "PlayerStatSummary.hpp"
namespace lol {
  struct PlayerStatSummaries { 
    std::vector<PlayerStatSummary> playerStatSummarySet; 
  };
  inline void to_json(json& j, const PlayerStatSummaries& v) {
    j["playerStatSummarySet"] = v.playerStatSummarySet; 
  }
  inline void from_json(const json& j, PlayerStatSummaries& v) {
    v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<PlayerStatSummary>>(); 
  }
}
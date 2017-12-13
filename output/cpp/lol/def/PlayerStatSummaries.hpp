#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerStatSummary.hpp>
namespace lol {
  struct PlayerStatSummaries { 
    std::vector<PlayerStatSummary> playerStatSummarySet; 
  };
  void to_json(json& j, const PlayerStatSummaries& v) {
  j["playerStatSummarySet"] = v.playerStatSummarySet; 
  }
  void from_json(const json& j, PlayerStatSummaries& v) {
  v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<PlayerStatSummary>>(); 
  }
}
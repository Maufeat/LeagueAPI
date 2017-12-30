#pragma once
#include "../base_def.hpp" 
#include "ClashRewardDefinition.hpp"
namespace lol {
  struct LolClashEogPlayerUpdateDTO { 
    int64_t tournamentId;
    int32_t themeVp;
    int32_t seasonVp;
    int64_t gameId;
    bool winner;
    std::vector<ClashRewardDefinition> rewardProgress;
    std::vector<ClashRewardDefinition> earnedRewards; 
  };
  inline void to_json(json& j, const LolClashEogPlayerUpdateDTO& v) {
    j["tournamentId"] = v.tournamentId; 
    j["themeVp"] = v.themeVp; 
    j["seasonVp"] = v.seasonVp; 
    j["gameId"] = v.gameId; 
    j["winner"] = v.winner; 
    j["rewardProgress"] = v.rewardProgress; 
    j["earnedRewards"] = v.earnedRewards; 
  }
  inline void from_json(const json& j, LolClashEogPlayerUpdateDTO& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.winner = j.at("winner").get<bool>(); 
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>(); 
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>(); 
  }
}
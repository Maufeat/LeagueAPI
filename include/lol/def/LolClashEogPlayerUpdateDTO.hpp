#pragma once
#include "../base_def.hpp" 
#include "ClashRewardDefinition.hpp"
namespace lol {
  struct LolClashEogPlayerUpdateDTO { 
    int64_t tournamentId;
    int64_t gameId;
    bool winner;
    int32_t themeVp;
    int32_t seasonVp;
    std::vector<ClashRewardDefinition> earnedRewards;
    std::vector<ClashRewardDefinition> rewardProgress; 
  };
  inline void to_json(json& j, const LolClashEogPlayerUpdateDTO& v) {
    j["tournamentId"] = v.tournamentId; 
    j["gameId"] = v.gameId; 
    j["winner"] = v.winner; 
    j["themeVp"] = v.themeVp; 
    j["seasonVp"] = v.seasonVp; 
    j["earnedRewards"] = v.earnedRewards; 
    j["rewardProgress"] = v.rewardProgress; 
  }
  inline void from_json(const json& j, LolClashEogPlayerUpdateDTO& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.winner = j.at("winner").get<bool>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>(); 
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "ClashRewardDefinition.hpp"
namespace lol {
  struct LolClashEogPlayerUpdateDTO { 
    bool winner;
    int32_t themeVp;
    int64_t gameId;
    int64_t tournamentId;
    std::vector<ClashRewardDefinition> earnedRewards;
    int32_t seasonVp;
    std::vector<ClashRewardDefinition> rewardProgress; 
  };
  inline void to_json(json& j, const LolClashEogPlayerUpdateDTO& v) {
    j["winner"] = v.winner; 
    j["themeVp"] = v.themeVp; 
    j["gameId"] = v.gameId; 
    j["tournamentId"] = v.tournamentId; 
    j["earnedRewards"] = v.earnedRewards; 
    j["seasonVp"] = v.seasonVp; 
    j["rewardProgress"] = v.rewardProgress; 
  }
  inline void from_json(const json& j, LolClashEogPlayerUpdateDTO& v) {
    v.winner = j.at("winner").get<bool>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardDefinition.hpp>
namespace lol {
  struct LolClashEogPlayerUpdateDTO { 
    int64_t tournamentId;
    std::vector<ClashRewardDefinition> earnedRewards;
    bool winner;
    std::vector<ClashRewardDefinition> rewardProgress;
    int64_t gameId;
    int32_t themeVp;
    int32_t seasonVp; 
  };
  void to_json(json& j, const LolClashEogPlayerUpdateDTO& v) {
    j["tournamentId"] = v.tournamentId; 
    j["earnedRewards"] = v.earnedRewards; 
    j["winner"] = v.winner; 
    j["rewardProgress"] = v.rewardProgress; 
    j["gameId"] = v.gameId; 
    j["themeVp"] = v.themeVp; 
    j["seasonVp"] = v.seasonVp; 
  }
  void from_json(const json& j, LolClashEogPlayerUpdateDTO& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>(); 
    v.winner = j.at("winner").get<bool>(); 
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  }
}
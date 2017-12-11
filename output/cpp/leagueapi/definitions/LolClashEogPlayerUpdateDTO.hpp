#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClashRewardDefinition.hpp>

namespace leagueapi {
  struct LolClashEogPlayerUpdateDTO { /**/ 
    std::vector<ClashRewardDefinition> rewardProgress;/**/
    std::vector<ClashRewardDefinition> earnedRewards;/**/
    int64_t tournamentId;/**/
    bool winner;/**/
    int32_t themeVp;/**/
    int64_t gameId;/**/
    int32_t seasonVp;/**/
  };
  static void to_json(json& j, const LolClashEogPlayerUpdateDTO& v) { 
    j["rewardProgress"] = v.rewardProgress;
    j["earnedRewards"] = v.earnedRewards;
    j["tournamentId"] = v.tournamentId;
    j["winner"] = v.winner;
    j["themeVp"] = v.themeVp;
    j["gameId"] = v.gameId;
    j["seasonVp"] = v.seasonVp;
  }
  static void from_json(const json& j, LolClashEogPlayerUpdateDTO& v) { 
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>(); 
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.winner = j.at("winner").get<bool>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.gameId = j.at("gameId").get<int64_t>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  }
} 
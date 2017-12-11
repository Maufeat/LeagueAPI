#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo { /**/ 
    bool allowBattleBoost;/**/
    bool battleBoostActivated;/**/
    std::vector<int64_t> unlockedSkinIds;/**/
    int64_t cost;/**/
    int64_t activatorCellId;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo& v) { 
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
    j["cost"] = v.cost;
    j["activatorCellId"] = v.activatorCellId;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo& v) { 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>(); 
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.activatorCellId = j.at("activatorCellId").get<int64_t>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo { 
    std::vector<int64_t> unlockedSkinIds;
    bool battleBoostActivated;
    int64_t cost;
    bool allowBattleBoost;
    int64_t activatorCellId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    j["unlockedSkinIds"] = v.unlockedSkinIds; 
    j["battleBoostActivated"] = v.battleBoostActivated; 
    j["cost"] = v.cost; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["activatorCellId"] = v.activatorCellId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>(); 
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.activatorCellId = j.at("activatorCellId").get<int64_t>(); 
  }
}
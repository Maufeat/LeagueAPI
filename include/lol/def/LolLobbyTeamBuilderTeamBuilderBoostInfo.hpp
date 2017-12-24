#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo { 
    bool allowBattleBoost;
    std::vector<int64_t> unlockedSkinIds;
    bool battleBoostActivated;
    int64_t activatorCellId;
    int64_t cost; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["unlockedSkinIds"] = v.unlockedSkinIds; 
    j["battleBoostActivated"] = v.battleBoostActivated; 
    j["activatorCellId"] = v.activatorCellId; 
    j["cost"] = v.cost; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>(); 
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>(); 
    v.activatorCellId = j.at("activatorCellId").get<int64_t>(); 
    v.cost = j.at("cost").get<int64_t>(); 
  }
}
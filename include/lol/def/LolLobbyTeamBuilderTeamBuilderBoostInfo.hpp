#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo { 
    std::vector<int64_t> unlockedSkinIds;
    int64_t activatorCellId;
    bool allowBattleBoost;
    bool battleBoostActivated;
    int64_t cost; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    j["unlockedSkinIds"] = v.unlockedSkinIds; 
    j["activatorCellId"] = v.activatorCellId; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["battleBoostActivated"] = v.battleBoostActivated; 
    j["cost"] = v.cost; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>(); 
    v.activatorCellId = j.at("activatorCellId").get<int64_t>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>(); 
    v.cost = j.at("cost").get<int64_t>(); 
  }
}
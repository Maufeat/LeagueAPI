#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo { 
    bool allowBattleBoost;
    int64_t activatorCellId;
    bool battleBoostActivated;
    int64_t cost;
    std::vector<int64_t> unlockedSkinIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["activatorCellId"] = v.activatorCellId; 
    j["battleBoostActivated"] = v.battleBoostActivated; 
    j["cost"] = v.cost; 
    j["unlockedSkinIds"] = v.unlockedSkinIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.activatorCellId = j.at("activatorCellId").get<int64_t>(); 
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>(); 
    v.cost = j.at("cost").get<int64_t>(); 
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>(); 
  }
}
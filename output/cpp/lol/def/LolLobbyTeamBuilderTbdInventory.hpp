#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderTbdInventory { 
    std::vector<int32_t> allChampionIds;
    std::vector<int32_t> initialSpellIds;
    std::vector<int32_t> spellIds;
    std::vector<int32_t> skinIds;
    std::vector<int32_t> disabledChampionIds;
    std::map<std::string, int32_t> lastSelectedSkinIdByChampionId; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbdInventory& v) {
    j["allChampionIds"] = v.allChampionIds; 
    j["initialSpellIds"] = v.initialSpellIds; 
    j["spellIds"] = v.spellIds; 
    j["skinIds"] = v.skinIds; 
    j["disabledChampionIds"] = v.disabledChampionIds; 
    j["lastSelectedSkinIdByChampionId"] = v.lastSelectedSkinIdByChampionId; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbdInventory& v) {
    v.allChampionIds = j.at("allChampionIds").get<std::vector<int32_t>>(); 
    v.initialSpellIds = j.at("initialSpellIds").get<std::vector<int32_t>>(); 
    v.spellIds = j.at("spellIds").get<std::vector<int32_t>>(); 
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>(); 
    v.disabledChampionIds = j.at("disabledChampionIds").get<std::vector<int32_t>>(); 
    v.lastSelectedSkinIdByChampionId = j.at("lastSelectedSkinIdByChampionId").get<std::map<std::string, int32_t>>(); 
  }
}
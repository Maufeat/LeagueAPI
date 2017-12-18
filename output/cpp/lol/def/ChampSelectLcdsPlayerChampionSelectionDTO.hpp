#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPlayerChampionSelectionDTO { 
    std::string summonerInternalName;
    int32_t selectedSkinIndex;
    int32_t spell1Id;
    int32_t championId;
    int32_t spell2Id; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    j["summonerInternalName"] = v.summonerInternalName; 
    j["selectedSkinIndex"] = v.selectedSkinIndex; 
    j["spell1Id"] = v.spell1Id; 
    j["championId"] = v.championId; 
    j["spell2Id"] = v.spell2Id; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
  }
}
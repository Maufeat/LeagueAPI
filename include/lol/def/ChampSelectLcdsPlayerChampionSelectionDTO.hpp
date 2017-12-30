#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPlayerChampionSelectionDTO { 
    int32_t spell2Id;
    int32_t spell1Id;
    int32_t selectedSkinIndex;
    int32_t championId;
    std::string summonerInternalName; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    j["spell2Id"] = v.spell2Id; 
    j["spell1Id"] = v.spell1Id; 
    j["selectedSkinIndex"] = v.selectedSkinIndex; 
    j["championId"] = v.championId; 
    j["summonerInternalName"] = v.summonerInternalName; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
}
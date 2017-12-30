#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatChampSelection { 
    int32_t selectedSkinIndex;
    int32_t championId;
    std::string summonerInternalName; 
  };
  inline void to_json(json& j, const LolChatChampSelection& v) {
    j["selectedSkinIndex"] = v.selectedSkinIndex; 
    j["championId"] = v.championId; 
    j["summonerInternalName"] = v.summonerInternalName; 
  }
  inline void from_json(const json& j, LolChatChampSelection& v) {
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
}
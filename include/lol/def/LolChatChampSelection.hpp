#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatChampSelection { 
    std::string summonerInternalName;
    int32_t championId;
    int32_t selectedSkinIndex; 
  };
  inline void to_json(json& j, const LolChatChampSelection& v) {
    j["summonerInternalName"] = v.summonerInternalName; 
    j["championId"] = v.championId; 
    j["selectedSkinIndex"] = v.selectedSkinIndex; 
  }
  inline void from_json(const json& j, LolChatChampSelection& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>(); 
  }
}
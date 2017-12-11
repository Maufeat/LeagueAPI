#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatChampSelection { /**/ 
    std::string summonerInternalName;/**/
    int32_t selectedSkinIndex;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolChatChampSelection& v) { 
    j["summonerInternalName"] = v.summonerInternalName;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolChatChampSelection& v) { 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 
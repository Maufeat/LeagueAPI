#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksChampionPreferredStyle { /**/ 
    int32_t style;/**/
    std::string championName;/**/
    uint32_t championId;/**/
  };
  static void to_json(json& j, const LolPerksChampionPreferredStyle& v) { 
    j["style"] = v.style;
    j["championName"] = v.championName;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolPerksChampionPreferredStyle& v) { 
    v.style = j.at("style").get<int32_t>(); 
    v.championName = j.at("championName").get<std::string>(); 
    v.championId = j.at("championId").get<uint32_t>(); 
  }
} 
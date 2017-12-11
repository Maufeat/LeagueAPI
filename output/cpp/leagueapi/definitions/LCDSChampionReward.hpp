#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LCDSChampionReward { /**/ 
    std::vector<int32_t> skins;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LCDSChampionReward& v) { 
    j["skins"] = v.skins;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LCDSChampionReward& v) { 
    v.skins = j.at("skins").get<std::vector<int32_t>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 
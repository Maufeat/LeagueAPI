#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootGameDataSummonerIcon { /**/ 
    std::string iconPath;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolLootGameDataSummonerIcon& v) { 
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolLootGameDataSummonerIcon& v) { 
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 
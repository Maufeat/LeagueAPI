#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMissionsCollectionsSummonerIcons { /**/ 
    std::vector<int32_t> icons;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsSummonerIcons& v) { 
    j["icons"] = v.icons;
  }
  static void from_json(const json& j, LolMissionsCollectionsSummonerIcons& v) { 
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsLcdsDynamicClientConfig { /**/ 
    json DisabledChampions;/**/
  };
  static void to_json(json& j, const LolCollectionsLcdsDynamicClientConfig& v) { 
    j["DisabledChampions"] = v.DisabledChampions;
  }
  static void from_json(const json& j, LolCollectionsLcdsDynamicClientConfig& v) { 
    v.DisabledChampions = j.at("DisabledChampions").get<json>(); 
  }
} 
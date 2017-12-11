#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampionsLcdsDynamicClientConfig { /**/ 
    json DisabledChampions;/**/
  };
  static void to_json(json& j, const LolChampionsLcdsDynamicClientConfig& v) { 
    j["DisabledChampions"] = v.DisabledChampions;
  }
  static void from_json(const json& j, LolChampionsLcdsDynamicClientConfig& v) { 
    v.DisabledChampions = j.at("DisabledChampions").get<json>(); 
  }
} 
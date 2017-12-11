#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistorySummonerIdAndName { /**/ 
    std::string displayName;/**/
  };
  static void to_json(json& j, const LolMatchHistorySummonerIdAndName& v) { 
    j["displayName"] = v.displayName;
  }
  static void from_json(const json& j, LolMatchHistorySummonerIdAndName& v) { 
    v.displayName = j.at("displayName").get<std::string>(); 
  }
} 
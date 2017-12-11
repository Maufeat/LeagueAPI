#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyChampSelectPickableChampions { /**/ 
    std::vector<int32_t> championIds;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyChampSelectPickableChampions& v) { 
    j["championIds"] = v.championIds;
  }
  static void from_json(const json& j, LolChampSelectLegacyChampSelectPickableChampions& v) { 
    v.championIds = j.at("championIds").get<std::vector<int32_t>>(); 
  }
} 
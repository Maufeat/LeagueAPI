#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolItemSetsGameDataChampion { /**/ 
    std::string alias;/**/
  };
  static void to_json(json& j, const LolItemSetsGameDataChampion& v) { 
    j["alias"] = v.alias;
  }
  static void from_json(const json& j, LolItemSetsGameDataChampion& v) { 
    v.alias = j.at("alias").get<std::string>(); 
  }
} 
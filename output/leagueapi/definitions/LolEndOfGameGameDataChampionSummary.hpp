#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameGameDataChampionSummary { /**/ 
    std::string alias;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolEndOfGameGameDataChampionSummary& v) { 
    j["alias"] = v.alias;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolEndOfGameGameDataChampionSummary& v) { 
    v.alias = j.at("alias").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 
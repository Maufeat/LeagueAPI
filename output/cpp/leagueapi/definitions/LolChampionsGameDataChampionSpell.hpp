#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampionsGameDataChampionSpell { /**/ 
    std::string description;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolChampionsGameDataChampionSpell& v) { 
    j["description"] = v.description;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolChampionsGameDataChampionSpell& v) { 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 
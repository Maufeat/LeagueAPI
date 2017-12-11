#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPerksCollectionsRune.hpp>"

namespace leagueapi {
  struct LolPerksCollectionsRunePage { /**/ 
    std::vector<LolPerksCollectionsRune> runes;/**/
    bool current;/**/
    uint32_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolPerksCollectionsRunePage& v) { 
    j["runes"] = v.runes;
    j["current"] = v.current;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolPerksCollectionsRunePage& v) { 
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune>>(); 
    v.current = j.at("current").get<bool>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 
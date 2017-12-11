#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRune.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsRunePage { /**/ 
    std::vector<LolCollectionsCollectionsRune> runes;/**/
    bool current;/**/
    uint32_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsRunePage& v) { 
    j["runes"] = v.runes;
    j["current"] = v.current;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolCollectionsCollectionsRunePage& v) { 
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune>>(); 
    v.current = j.at("current").get<bool>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 
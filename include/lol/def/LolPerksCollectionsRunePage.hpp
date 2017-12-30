#pragma once
#include "../base_def.hpp" 
#include "LolPerksCollectionsRune.hpp"
namespace lol {
  struct LolPerksCollectionsRunePage { 
    std::string name;
    uint32_t id;
    std::vector<LolPerksCollectionsRune> runes;
    bool current; 
  };
  inline void to_json(json& j, const LolPerksCollectionsRunePage& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["runes"] = v.runes; 
    j["current"] = v.current; 
  }
  inline void from_json(const json& j, LolPerksCollectionsRunePage& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune>>(); 
    v.current = j.at("current").get<bool>(); 
  }
}
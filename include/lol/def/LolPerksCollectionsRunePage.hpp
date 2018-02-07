#pragma once
#include "../base_def.hpp" 
#include "LolPerksCollectionsRune.hpp"
namespace lol {
  struct LolPerksCollectionsRunePage { 
    bool current;
    uint32_t id;
    std::string name;
    std::vector<LolPerksCollectionsRune> runes; 
  };
  inline void to_json(json& j, const LolPerksCollectionsRunePage& v) {
    j["current"] = v.current; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["runes"] = v.runes; 
  }
  inline void from_json(const json& j, LolPerksCollectionsRunePage& v) {
    v.current = j.at("current").get<bool>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune>>(); 
  }
}
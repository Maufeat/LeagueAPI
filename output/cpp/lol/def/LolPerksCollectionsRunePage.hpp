#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksCollectionsRune.hpp>
namespace lol {
  struct LolPerksCollectionsRunePage { 
    std::vector<LolPerksCollectionsRune> runes;
    bool current;
    std::string name;
    uint32_t id; 
  };
  void to_json(json& j, const LolPerksCollectionsRunePage& v) {
    j["runes"] = v.runes; 
    j["current"] = v.current; 
    j["name"] = v.name; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolPerksCollectionsRunePage& v) {
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune>>(); 
    v.current = j.at("current").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}
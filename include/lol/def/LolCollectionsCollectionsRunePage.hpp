#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRune.hpp"
namespace lol {
  struct LolCollectionsCollectionsRunePage { 
    uint32_t id;
    std::vector<LolCollectionsCollectionsRune> runes;
    bool current;
    std::string name; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRunePage& v) {
    j["id"] = v.id; 
    j["runes"] = v.runes; 
    j["current"] = v.current; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRunePage& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune>>(); 
    v.current = j.at("current").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRune.hpp"
namespace lol {
  struct LolCollectionsCollectionsRunePage { 
    std::string name;
    uint32_t id;
    std::vector<LolCollectionsCollectionsRune> runes;
    bool current; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRunePage& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["runes"] = v.runes; 
    j["current"] = v.current; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRunePage& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune>>(); 
    v.current = j.at("current").get<bool>(); 
  }
}